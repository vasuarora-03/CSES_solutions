#include <bits/stdc++.h>
using namespace std;

int moves[8][2] = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

void bfs(vector<vector<int>>& grid, int row, int col, queue<pair<int,int>>& q){
    int n = grid.size();
    while(!q.empty()){
        auto [r, c] = q.front();
        q.pop();
        for(int i=0; i<8; i++){
            int new_r = r + moves[i][0];
            int new_c = c + moves[i][1];
            if(new_r >= 0 && new_r < n && new_c >= 0 && new_c < n && grid[new_r][new_c] == -1){
                grid[new_r][new_c] = grid[r][c] + 1;
                q.push({new_r, new_c});
            }
        }
    }
    return;
}

int main(){
    int n;
    cin >>n;
    vector<vector<int>> grid(n, vector<int>(n, -1));
    grid[0][0] = 0;
    queue<pair<int,int>> q;
    q.push({0,0});
    bfs(grid, 0, 0, q);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}