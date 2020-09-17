#include<vector>
#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n; 
    if(n == 1){
        cout << 1;
        return 0;
    }
    if(n <= 3){
        cout << "NO SOLUTION";
        return 0;
    }
    for(int i = (n + n % 2) - 2; i > 0; i-=2){
        cout << i << ' ';
    }
    cout << n << ' ';
    for(int i = 1; i < n; i+=2){
        cout << i << ' ';
    }

}