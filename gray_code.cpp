#include <bits/stdc++.h>
using namespace std;

vector<string> generate_gray_code(int n) {
    if(n == 1){
        return {"0", "1"};
    }
    
    vector<string> gray_code;
    vector<string> prev_gray_code = generate_gray_code(n-1);
    //ab n-1 ka gray code generate kar liya hai
    // ye vale ke liye pehle ek ek pe traverse karunga and pehle sabke aage 0 append karunga
    //then mirror karunga and sabke aage 1 append karunga
    for(int i = 0; i<prev_gray_code.size(); i++){
        gray_code.push_back("0" + prev_gray_code[i]);
    }

    for(int i = prev_gray_code.size() - 1; i >= 0; i--){
        gray_code.push_back("1" + prev_gray_code[i]);
    }
    return gray_code;
}

int main(){
    int n;
    cin >> n;
    vector<string> gray_code = generate_gray_code(n);
    for(int i = 0; i < gray_code.size(); i++){
        cout << gray_code[i] << endl;
    }
    return 0;
}