#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k;
        cin >> k;
        int x;
        cin >> x;
        int y;
        cin >> y;

        bool found = false;
        if(x == y){
            cout << "YES" << "\n";
            continue;
        }
        for(int i = (x+k)%n; i!=x; i = (i+k)%n){
            if(i == y){
                cout << "YES" << "\n";
                found = true;
                break;
            }

        }
        if(!found){
            cout << "NO" << "\n";
        }
    }
}