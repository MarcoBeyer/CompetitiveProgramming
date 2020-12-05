#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << 1 << "\n";
            continue;
        }
        if((n  & (n - 1))==0){
            cout << -1 << "\n";
            continue;
        }
        cout << "2 3 1 ";
        int i = 4;
        while(i<=n){
            if((i  & (i - 1))==0 && (i+1)<=n){
                i = i + 1;
                cout << i << " ";
                i--;
                cout << i << " ";
                i = i + 2; 
            } else{
                cout << i << " ";
                i++;
            }
        }
        cout << "\n";
    }
}