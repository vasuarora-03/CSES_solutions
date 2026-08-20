#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> pos(n+1);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        pos[arr[i]] = i+1;
    }
    //easy since no duplicates
    //ab mujhe pata hai kaun kis position par hai so i will see kitne backflips i need
    int backflips = 0;
    for(int i=1; i<n; i++){
        if(pos[i] > pos[i+1]){
            //means flip maarna padega
            backflips++;
        }
    }
    cout << 1 + backflips << endl;
    return 0;
}