#include <iostream>
#include <algorithm>
#include <vector>

typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    ll r = 0;
    cin >> n;
    vector<ll> budgets(n);
    while(n--){
        cin >> budgets[n];
    }
    sort(budgets.begin(), budgets.end(), greater<ll>());
    for(ll i = 0LL; i<budgets.size(); i++){
        r = max(r, budgets[i] * (i + 1));
    }
    cout << r;
}