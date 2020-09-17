#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string word, a, b;
        cin >> word;
        for(int i=0; i < word.length(); i++){
            if(i < word.length() / 2){
                a += word[i];
            } else if(i >= word.length() / 2 + word.length() % 2){
                b += word[i];
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        string lapindrom = "YES";
        for(int i = 0; i<a.length(); i++){
            if(a[i]!=b[i]){
                lapindrom = "NO";
            }
        }
        cout << lapindrom << "\n";
    }
}