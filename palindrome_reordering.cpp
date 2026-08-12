#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    unordered_map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    int odd_count = 0;
    for(auto it: mp){
        if(it.second % 2 != 0){
            odd_count++;
        }
    }
    if(odd_count > 1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        //PRINT THE PALINDROME
        string first_half = "";
        for(auto it: mp){
            if(it.second % 2 == 0){
                first_half += string(it.second/2, it.first);
                it.second = it.second - (it.second/2)*2;
            }
        }
        string second_half = first_half;
        reverse(second_half.begin(), second_half.end());
        for(auto it: mp){
            if(it.second % 2 != 0){
                first_half += string(it.second, it.first);
                break;
            }
        }
        cout << first_half + second_half << endl;
    }
    return 0;
}