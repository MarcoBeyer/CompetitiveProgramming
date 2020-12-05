#include<iostream>

using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll big_pile = max(a,b);
        ll small_pile = min(a,b);
        ll r = (2*big_pile-small_pile)%3;
        ll ans = (2*big_pile-small_pile)/3;
        
        if((r == 0 && big_pile-2*ans>=0) || (a == 0 && b==0)){
            cout << "YES" << "\n";
        } else{
            cout << "NO" << "\n";
        }
    }
}