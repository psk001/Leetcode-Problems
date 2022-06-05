class Solution {
    int res=0;
public:
    int totalNQueens(int n) {
        vector<string> board;
        string s(n, '.');
        
        for(int i=0; i<n; i++)
            board.push_back(s);
        
        solve(0, board, n);
        
        return res;        
    }
    
    void solve(int col, vector<string> board, int n){
        if(col==n){
            res++;
            return;
        }
        
        for(int row=0; row<n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col]='Q';
                solve(col+1, board, n);
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
        
        row=dr, col=dc;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        
        col=dc;
        while(row<n and col>=0){
            if(board[row][col]=='Q') return false;
            row++, col--;
        }
        
        return true;
    }
};