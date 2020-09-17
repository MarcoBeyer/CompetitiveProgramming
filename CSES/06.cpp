#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long ull;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        ull x,y;
        cin >> y;
        cin >> x;
        ull ring = max(x,y);
        ull number = ring*ring;
        if(ring % 2 == 0){
            number -= (x-1);
            number -= ring-y;
        } else {
            number -= (ring-x);
            number -= (y-1);
        }
        cout << number << '\n';
    }
   
}