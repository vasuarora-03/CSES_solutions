#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> stick_lengths(n);
    for(int i = 0; i<n; i++){
        cin >> stick_lengths[i];
    }
    sort(stick_lengths.begin(), stick_lengths.end());
    int mid = stick_lengths[n/2];
    long long ans = 0;
    for(int i=0; i<n; i++){
        ans += abs(mid-stick_lengths[i]);
    }
    cout << ans << endl;
    return 0;
}
