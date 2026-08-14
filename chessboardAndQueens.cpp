#include <bits/stdc++.h>
using namespace std;

long long ans = 0;
bool is_safe(vector<vector<char>> &board, int row, int col, int n){
    if(board[row][col] == '*'){
        return false;
    }
    //check for the column
    for(int i = 0; i < row; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    //check for the left diagonal
    int r = row-1;
    int c = col-1;
    while(r >= 0 && c >= 0){
        if(board[r][c] == 'Q'){
            return false;
        }
        r--;
        c--;
    }
    //check for the right diagonal
    int r2 = row-1;
    int c2 = col+1;
    while(r2 >= 0 && c2 < n){
        if(board[r2][c2] == 'Q'){
            return false;
        }
        r2--;
        c2++;
    }

    return true;
}
void find_queens(vector<vector<char>> &board, int row, int n){
    if(row == n){
        ans++;
        return;
    }
    for(int col = 0; col <n; col++){
        if(is_safe(board, row, col, n)){
            board[row][col] = 'Q';
            find_queens(board, row+1, n);
            board[row][col] = '.';
        }
    }
}

int main(){
    string s;
    for(int i=0; i<8; i++){
        string temp;
        cin >> temp;
        s += temp;
    }
    int sz = s.length();
    int n = sqrt(sz);
    vector<vector<char>> board(n, vector<char>(n, '.'));
    for(int i = 0; i < sz; i++){
        int row = i/n;
        int col = i%n;
        board[row][col] = s[i];
    }
    //now we need to check if the queens are placed in such a way that they don't attack each other
    
    find_queens(board, 0, n);
    cout << ans << endl;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << board[i][j];
    //     }
    //     cout << endl;
    // }
    return 0;
}