#include <bits/stdc++.h>
using namespace std;

bool isValid(int r, int c, int n, int m){
    return (r>=0 && r<n && c>=0 && c<m);
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            unordered_set<char> notpossible;

            notpossible.insert(grid[i][j]);
            if(isValid(i, j-1, n, m)){
                notpossible.insert(grid[i][j-1]);
            }
            if(isValid(i-1, j, n, m)){
                notpossible.insert(grid[i-1][j]);
            }
            
            bool coloured = false;
            for(int k=0; k<4;k++){
                char c = 'A' + k;
                if(notpossible.find(c) == notpossible.end()){
                    grid[i][j] = c;
                    coloured = true;
                    break;
                }
            }
            if(!coloured){
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }   
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}

// left - r-0, c-1 -> {0, -1}
// top - r-1, c-0 -> {-1, 0}