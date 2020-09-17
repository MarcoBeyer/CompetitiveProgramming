#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> cars(n);
        for(int i=0; i < n; i++){
            cin >> cars[i];
        }
        int s = cars[0];
        int m = 1;
        for(int i = 1; i < cars.size(); i++){
            if(s >= cars[i]){
                m++;
            }
            s = min(s, cars[i]);
        }
        cout << m << "\n";
    }    
}