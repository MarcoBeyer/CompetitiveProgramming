#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 1;
    for(int i = 0; i<n; i++){
        ans = ans * 2 % ((int)1e9 + 7);
    }
    cout << ans << "\n";
}