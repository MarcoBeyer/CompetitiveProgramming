#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int g, ini, n, q;
        cin >> g;
        while(g--){
            cin >> ini;
            cin >> n;
            cin >> q;     
            int ans = n/2;
            if(ini != q){
                ans = n - ans;
            }  
            cout << ans << "\n"; 
        }
    }
}
