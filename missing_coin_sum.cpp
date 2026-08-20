#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    vector<int> coins(n);
    for(int i=0; i<n; i++){
        cin >> coins[i];
    }
    sort(coins.begin(), coins.end());
    long long last_possible = 0;
    for(int i=0; i<n; i++){
        int coin = coins[i];
        //ab dekhna hai kya last_possible se agla hai ye ?
        if(coin <= last_possible+1){
            //possible hai
            last_possible += coin;
        }
        else{
            //mtlb ye door jaa raha hai beech me gap hoga, so last_possible + 1 will be my answer
            break;
        }
    }
    cout << last_possible + 1 << endl;

    return 0;
}

// 1 2 2 7 9
// 1 3 5 