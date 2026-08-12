#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    for(int i = 1; i <= n; i++){
        long long total_cells = (long long)(i) * i;
        if(i == 1){
            cout << 0 << endl;
        }
        else{
            long long total_ways = (long long)(total_cells * (total_cells - 1)) / 2;
            long long attack_ways = (i-2)*(i-1)*2*2;
            cout << total_ways - attack_ways << endl;
        }
    }
    return 0;
}