#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> mpp;
    int ans = 0;
    //2 pointer rakh leta hu, sliding window types
    int i = 0; int j = 0;
    while(j < n){
        mpp[arr[j]]++;

        //now check if this bychance was duplicate 
        while(mpp[arr[j]] > 1){
            // that means it's there before ab peeche se remove karna chaalu karenge
            mpp[arr[i]]--;
            i++;
        }
        //while loop break means ki duplicate is no more
        int currlen = j-i+1;
        ans = max(ans, currlen);
        j++;
    }
    cout << ans << endl;
    return 0;
}