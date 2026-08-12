#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        if(y>=x){
            //check if y is even or odd
            if(y%2==0){
                cout << (y-1)*(y-1) + 1 + (x-1) << endl;
            }
            else{
                cout << y*y - (x-1) << endl;
            }
        }
        else{
            //check if x is even or odd
            if(x%2==0){
                cout << x*x - (y-1) << endl;
            }
            else{
                cout << (x-1)*(x-1) + 1 + (y-1) << endl;
            }
        }
    }
    return 0;
}