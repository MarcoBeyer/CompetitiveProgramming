#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<ll> sticks(n);
        for (ll i = 0; i < n; i++) {
            cin >> sticks[i];
        }
        sort(sticks.begin(), sticks.end(), greater<ll>());
        ll h = sticks[0];
        ll ops = 1;
        if(h == 0){
            ops = 0;
        }
        for(ll i = 1; i < n; i++){
            if(sticks[i] < h && sticks[i] > 0){
                ops++;
                h = sticks[i];
            }
        }
        cout << ops << "\n";
    }
}