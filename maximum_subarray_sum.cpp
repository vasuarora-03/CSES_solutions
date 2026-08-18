#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //har jagah tak ka maximum subarray sum store kar lunga
    long long maxi = arr[0];
    vector<long long> subarray_sum(n);
    subarray_sum[0] = arr[0];
    for(int i=1; i<n; i++){
        subarray_sum[i] = max(subarray_sum[i-1]+arr[i] , arr[i]);
        maxi = max(maxi, subarray_sum[i]);
    }
    cout << maxi << endl;
    return 0;
}