#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string input;
        cin >> input;
        bool indian = (input == "INDIAN"); 
        int ans = 0;
        while(n--){
            cin >> input;
            if(input == "CONTEST_WON"){
                int r;
                cin >> r;
                ans += r<20?300 + 20-r:300;
            } else if(input == "TOP_CONTRIBUTOR") {
                ans += 300;
            } else if(input == "BUG_FOUND"){
                int s;
                cin >> s;
                ans += s;
            } else if(input == "CONTEST_HOSTED"){
                ans += 50;
            }
        }
        ans = indian?ans/200:ans/400;
        cout << ans << "\n";
    }
}