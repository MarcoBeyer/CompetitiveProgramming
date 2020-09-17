#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    cin >> input;
    int maxCount = 0;
    char lastChar = ' ';
    int count = 0;

    for(char c : input){
        if(c == lastChar){
            count++;
        } else {
            lastChar = c;
            count = 1;
        }
        maxCount = max(count, maxCount);
    }
    cout << maxCount;
}