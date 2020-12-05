#include<algorithm>
#include<iostream>
#include<map>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;
    int n;
    n = input.size();
    sort(input.begin(), input.end());
    string ans = "";
    string m = "";
    int i = 0;
    while(i<n){
        if(!(i == n-1) && (input[i] == input[i+1])){
            ans.push_back(input[i]);
            i = i+2;
        } else {
            if(m != ""){
                cout << "NO SOLUTION" << "\n";
                return 0;
            } 
            m = input[i];
            i++;
        }
    }
    cout << ans;
    cout << m;
    reverse(ans.begin(), ans.end());
    cout <<ans;
}