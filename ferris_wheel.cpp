#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> childWeight(n);
    for(int i=0; i<n; i++){
        cin >> childWeight[i];
    }
    int cnt = 0;
    sort(childWeight.begin(), childWeight.end());
    //heavy vale ko light vale se club karne ka try karta hu
    int i = 0;
    int j = n-1;
    while (i <= j)
    {
        if(i != j){
            if(childWeight[i] + childWeight[j] <= x){
                // ye pair kar denge 
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        else{
            //ye mtlb ek hi hai 
            i++;
            j--;
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
 
   // bool took_last = false;
    // for(int i=0; i<n-1; i++){
    //     took_last = false;
    //     //ab child weight ko club karne ka try karta hu
    //     if(childWeight[i]+childWeight[i+1] <= x){
    //         cnt++;
    //         i++;
    //         took_last = true;
    //         continue;
    //     }
    //     else if(childWeight[i] <= x){
    //         cnt++;
    //     }
    // }
    // if(!took_last){
    //     //mtlb last vala nahi liya abhi
    //     cnt++;
    // }
    // cout << cnt << endl;