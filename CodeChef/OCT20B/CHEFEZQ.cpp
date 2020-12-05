#include<iostream>
#include <limits>

using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll k;
        cin >> k;
        ll r = 0;
        for(int i = 1; i<=n; i++){
            ll q;
            cin >> q;
            r = r+q-k;
            if(r<0){
               cout << i << "\n";
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               break; 
            }
            if(i==n){
                ll ans = n+(r/k)+1;
                cout << ans << "\n";
            }
        }
    }
}