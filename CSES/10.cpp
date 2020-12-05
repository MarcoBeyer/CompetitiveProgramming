#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 5; n/i > 0 ; i*=5){
        ans += n/i;
    }
    cout << ans << "\n";
}