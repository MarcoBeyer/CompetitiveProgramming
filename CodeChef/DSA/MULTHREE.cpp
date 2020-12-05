#include<iostream>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll k;
        cin >> k;
        int d0;
        cin >> d0;
        int d1;
        cin >> d1;
        ll sum = d0 + d1;
        ll r = d0 % 3 + d1 % 3;
        ll r_cycle = (2 * sum % 10 + 4 * sum % 10 + 8 * sum % 10 + 6 * sum % 10) % 3;

        if(k > 2){
            r += sum % 10 % 3;
        }
        if(k > 7){
            r += (k-3)/4 * r_cycle;
        }
        
        int p=2;
        for(int i = 0; i < (k-3) % 4; i++){
            r += p * sum % 10 % 3;
            p = p*2%10;
        } 
        if(r % 3 == 0){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
}