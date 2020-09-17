#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int number;
        int sum = 0;
        cin >> number;
	    for(int i=5; i<=number; i=5*i)
	        sum += number/i;
        cout << sum << "\n";
    }
    
}