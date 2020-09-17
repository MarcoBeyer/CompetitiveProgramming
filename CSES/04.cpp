#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main(){
    int n;
    cin >> n;
    ll steps = 0;
    ll k;
    ll mx = 0;
    while (cin >> k){
        mx = max(k, mx);
        steps += mx-k;
    }      
    cout << steps;
}