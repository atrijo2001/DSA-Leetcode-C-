class Solution {
public:
    bool isSafe(int row, int col, vector<string>board, int n){
        int duprow = row;
        int dupcol = col;
        while(row>=0 and col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row = duprow;
        col = dupcol;
        while(col>=0){
            if(board[row][col] == 'Q') return false;
            col--;
        }
        row = duprow;
        col = dupcol;
        while(row<n and col>=0){
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void helper(vector<string> &board, int n, int col, vector<vector<string>> &ans){
        if(n == col){
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                helper(board, n, col+1, ans);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i=0; i<n; i++){
            board[i] = s;
        }
        helper(board, n, 0, ans);
        return ans;
    }
};