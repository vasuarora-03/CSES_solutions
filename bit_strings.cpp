#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

long long mod_pow(long long base, long long exp) {
    if(exp == 0) return 1;
    long long half = mod_pow(base, exp / 2);
    if(exp % 2 == 0) return (half * half) % MOD;
    else return (half * half * base) % MOD;
}

int main(){
    int n;
    cin >> n;
    cout << mod_pow(2, n) << endl;
    return 0;
}