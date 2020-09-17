#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long r=0;
        long n;
        cin>>n;
        while(n!=0){
            r*=10;
            r+=(n%10);
            n/=10;
        }
        cout << r << "\n";
    }
}