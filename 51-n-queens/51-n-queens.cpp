class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n);
        
        string s(n, '.');
        
        for(int i=0; i<n; i++)
            board[i]=s;
        
        solve(0, board, res, n);
        
        return res;
    }
    
    void solve(int col, vector<string>& board, vector<vector<string>>& res, int n){
        if(col==n){
            res.push_back(board);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col]='Q';
                solve(col+1, board, res, n);
                board[row][col]='.';
            }
        }
    }
    
    bool isSafe(int row, int col, vector<string> board, int n){
        int dr=row, dc=col;
        
        while(row>=0 and col>=0){
            if(board[row][col]=='Q') return false;
            row--, col--;
        }
        
        col=dc, row=dr;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        
        row=dr, col=dc;
        while(row<n and col>=0){
            if(board[row][col]=='Q') return false;
            row++, col--;
        }
        
        return true;
    }
};