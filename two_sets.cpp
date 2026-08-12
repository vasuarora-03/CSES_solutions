#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum = (long long)n * (n + 1) / 2;
    if(sum % 2 != 0){
        cout << "NO" << endl;
        return 0;
    }
    else{
        cout << "YES" << endl;
        vector<int> v1, v2;
        long long half_sum = sum/2;
        for(int i = n; i >= 1; i--){
            if(half_sum-i>=0){
                v1.push_back(i);
                half_sum -= i;
            }
            else{
                v2.push_back(i);
            }
        }
        cout << v1.size() << endl;
        for(int i = 0; i < v1.size(); i++){
            cout << v1[i] << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for(int i = 0; i < v2.size(); i++){
            cout << v2[i] << " ";
        }
    }
    return 0;
}