#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> movies;
    for(int i=0; i<n; i++){
        int start; int end;
        cin >> start >> end;
        movies.push_back({end, start});
    }
    sort(movies.begin(), movies.end());

    int cnt = 0;
    int last_end = 0;

    for(auto [end, start] : movies){
        if(start >= last_end){
            cnt++;
            last_end = end;
        }
    }
    cout << cnt << endl;
    return 0;
}