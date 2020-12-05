#include<iostream>
#include<vector>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll sum = n*(1+n)/2;
    if(sum & 1){
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
        vector<ll> l;
        ll sum_l = 0;
        vector<ll> r;
        ll sum_r = 0;
        for(ll i = n; i>0; i--){
            if(sum_l<=sum_r && sum_l+i <= sum/2){
                l.push_back(i);
                sum_l += i;
            } else {
                r.push_back(i);
                sum_r += i;
            }
        }
        cout << l.size() << "\n";
        for(auto element : l){
            cout << element << " ";
        }
        cout << "\n";
        cout << r.size() << "\n";
        for(auto element : r){
            cout << element << " ";
        }
        cout << "\n";
    }
}