#include<iostream>
#include <cmath>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = 0;
        ll n_l = sqrt(1.25+(n*(n-1))/2.0L)-0.5;
        ll n_r = n-n_l;
        ll l = (1+n_l)/2.0L*n_l;
        ll r = (n-n_r+1+n)/2.0L*n_r;
        if(n==1){
            r = 0;
        }
        if((n-2)% 4 == 0 || (n-1) % 4 == 0){
            cout << 0 << "\n";
            continue;
        }
        ll i = n_l+1;
        ll upper_bound = sqrt(1.25+(n*(n+1))/2.0L)-0.5;
        while(n_l<=upper_bound){
            if(r==l){
                if((n_l)>1){
                    ans += n_l/2.0L*(n_l-1);
                }

                if((n_r)>1){
                    ans += n_r/2.0L*(n_r-1);
                }
                break;
            } else if((r-l)%2==0 && (n-1)>=((r-l)/2)){
                ll half = (r-l)/2;
                ans += min(n-half, n_l) - max(n_l+1-half, 1LL) + 1;
            }
            l+=i;
            r-=i;
            n_l++;
            n_r--;
            i++;
        }
        cout << ans << "\n";
    }
}
