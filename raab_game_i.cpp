#include <bits/stdc++.h>
using namespace std;
void print_game(int n, int a, int b){
    if((a==0 || b==0) && (a+b !=0)){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
    int ties = n - (a+b);
    for(int i = a+1; i<=a+b; i++){
        cout << i << " ";
    }
    //now second player has won b times, let's write 1...a times
    for(int i=1; i<=a; i++){
        cout << i << " ";
    }
    //ab ties left, let's write them
    for(int i= n-ties+1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
    return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        if(a+b >n){
            cout << "NO" << endl;
            continue;
        }
        print_game(n, a, b);
    }
    return 0;
}


//1 2 3 4 5 6 7 8
// a = 2, b = 3, ties = 3
// 1 2 3 4 5 6 7 8
// 2 3 4 1 2 6 7 8
// n = 8 tie = 3
// 8-3+1 = 6
// n-tie+1 -> n