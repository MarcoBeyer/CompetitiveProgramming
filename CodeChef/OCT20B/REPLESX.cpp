#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<ll> a;
        ll n, x, p, k;
        cin >> n >> x >> p >> k;
        for(ll i = 0; i<n; i++){
            ll temp;
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        if(a[p-1]==x){
            cout << 0 << "\n";
        }  else if(p>=k && x>=a[p-1]){
            ll ans = std::distance(a.begin(), lower_bound(a.begin(), a.end(), x)) + 1;
            ans = ans - p;
            cout << ans << "\n"; 
        } else if(p<=k && x<=a[p-1]){
            ll ans = std::distance(a.begin(), upper_bound(a.begin(), a.end(), x));
            ans = p - ans;
            cout << ans << "\n"; 
        } else {
            cout << -1 << "\n";
        }
    }
}