#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; //number of tickets
    int m; //customers 
    cin >> n >> m;
    vector<int> ticketsPrice(n);
    vector<int> customerMaxPrice(m);

    for(int i=0; i<n; i++){
        cin >> ticketsPrice[i];
    }
    for(int i=0; i<m; i++){
        cin >> customerMaxPrice[i];
    }

}