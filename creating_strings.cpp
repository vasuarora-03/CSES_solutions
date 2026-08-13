#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

void print_combinations(map<char, int> &mp, string &current, int n){
    if(current.length() == n){
        cout << current << endl;
        return;
    }
    for(auto it : mp){
        if(it.second > 0){
            current.push_back(it.first);
            mp[it.first]--;
            print_combinations(mp, current, n);
            mp[it.first]++;
            current.pop_back();
        }
    }
}

int main(){
    string s;
    cin >> s;
    int n = s.length();
    map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    long long ans = factorial(n);
    for(auto it : mp){
        ans /= factorial(it.second);
    }
    cout << ans << endl;
    //now i need to print all the permutations of the string s
    string current = "";
    print_combinations(mp, current, n);
    return 0;
}