#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

set<int> get_infected(map<set<int>, double> times, int athlete, double time, int n){
    set<int> infected{athlete};
    for(int i=1; i<=n; i++){
        if(i!=athlete && times[{i, athlete}]>time){
            set<int> new_infected = get_infected(times, i, times[{i, athlete}], n);
            infected.insert(new_infected.begin(), new_infected.end());
        }
    }
    return infected;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, min_i, max_i;
        cin >> n;
        vector<int> a(n, -1);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        map<set<int>, double> times;
        for(int i=1; i<=n;i++){
            for(int j=i; j<=n;j++){
                int v_1 = a[i-1];
                int v_2 = a[j-1];
                if((v_2-v_1)!=0){
                    times[{i, j}] = (double)(i-j)/(v_2-v_1);
                } else {
                    times[{i, j}] = -1;
                }
            }
        }
        
        for(int i=1;i<=n;i++){
            set<int> infected = get_infected(times, i, 0, n);
            if (i==1){
                min_i = infected.size();
                max_i = infected.size();
            } else {
                min_i = min(min_i, static_cast<int>(infected.size()));
                max_i = max(max_i, static_cast<int>(infected.size()));
            }
        }
        cout << min_i << " " << max_i << "\n";
    }    
}
