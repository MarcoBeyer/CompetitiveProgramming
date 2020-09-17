#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> m(n,vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> m[i][j];
            }
        }
        int ops = 0;
        for(int i = n; i > 1; i--){
            if(ops%2==0){
                if(m[0][i-1]!=i){
                    ops++;
                }
            } else {
                if(m[i-1][0]!=i){
                    ops++;
                } 
            }
        }
        cout << ops << "\n";
    }
}