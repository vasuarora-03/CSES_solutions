#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void tower_of_hanoi(int n, int src, int dest, int aux){
    if(n == 1){
        cout  << src << " " << dest << endl;
        cnt++;
        return;
    }
    tower_of_hanoi(n-1, src, aux, dest);
    cout << src << " " << dest << endl;
    cnt++;
    tower_of_hanoi(n-1, aux, dest, src);
}
int main(){
    int n;//n idhar number of disc hai
    cin >> n;
    cout << pow(2, n) - 1 << endl;//yeh number of moves hai
    tower_of_hanoi(n, 1, 3, 2);//tc : O(2^n) and sc : O(n) 
    return 0;
}