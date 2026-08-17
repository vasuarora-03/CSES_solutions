#include <bits/stdc++.h>
using namespace std;

bool isPossible(map<char, int>& freq, char ch){
    //pehle i will calculate the mode
    //then will check (total places to be filled + 1)/2, se kam hai ya zyada hai
    //agar zyada hai then it's not possible to accomodate this, else sahi hai fir
    //bas ek care karni hai current char ki kyuki ye just likhkar aaye hai so this should not repeat toh isko next slot in nahi kar skte
    int total = 0;
    int maxi = 0;

    for(auto it: freq){
        total += it.second;
        maxi = max(maxi, it.second);
    }
    
    if(freq[ch] > total - freq[ch]){
        return false;
    }

    return maxi <= (total+1)/2;
}


int main(){
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> freq;
    for(int i=0; i<n; i++){
        freq[s[i]]++;
    }
    string ans = "";
    char last = '\0';
    for(int i=0; i<n; i++){
        //har element ke liye checkl karenge map me
        for(int j= 0; j<26; j++){
            char ch = 'A' + j;
            
            if(freq[ch] == 0 || ch == last){
                continue;
            }

            freq[ch]--;
            //choose kar liya maine, now verify if this makes other possible
            if(isPossible(freq, ch)){
                last = ch;
                ans.push_back(ch);
                break;
            }
            else{
                freq[ch]++;
            }
        }
    }

    if(ans.length() == n){
        cout << ans << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}

//initially, i am thinking of having a map for frequency of each character in the string.
//fir i will check whether lexicographically smallest element is possible to fit on that index 
//mode at any time should be less than (total positions to fill+1)/2
