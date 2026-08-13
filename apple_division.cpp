#include <bits/stdc++.h>
using namespace std;

void f(vector<long long> &a, long long curr_sum, int index, long long &min_diff, long long total_sum){
    if(index == a.size()){
        long long diff = abs(curr_sum - (total_sum - curr_sum));
        min_diff = min(min_diff, diff);
        return;
    }
    f(a, curr_sum + a[index], index + 1, min_diff, total_sum);//pivk
    f(a, curr_sum, index + 1, min_diff, total_sum);//not pick
}

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long total_sum = accumulate(a.begin(), a.end(), 0LL);
    long long min_diff = LONG_LONG_MAX;
    f(a, 0, 0, min_diff, total_sum);
    cout << min_diff << endl;
    return 0;
}