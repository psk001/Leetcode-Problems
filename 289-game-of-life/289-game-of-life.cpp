class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(), n=board[0].size();
        vector<vector<int>> t=board; // (m, vector<int>(n, 0)); // board //
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int l=getlife(t, i, j);
                if(board[i][j]==0){
                    if(l==3)
                        board[i][j]=1;
                }
                else if (board[i][j]==1){
                    if(l<2 || l>3)
                        board[i][j]=0;
                }
            }
        }
        
    }
    
    int getlife(vector<vector<int>>& board, int i, int j){
        int res=0;
        if(i>0 and board[i-1][j])
            res++;
        
        if(i<board.size()-1 and board[i+1][j])
            res++;
        
        if(j>0 and board[i][j-1])
            res++;
        
        if(j<board[0].size()-1 and board[i][j+1])
            res++;
        
        if(i>0 and j>0 and board[i-1][j-1])
            res++;
        
        if(i>0 and j<board[0].size()-1 and board[i-1][j+1])        
            res++;
        
        if(j<board[0].size()-1 and i<board.size()-1 and board[i+1][j+1])
            res++;
        
        if(j>0 and i<board.size()-1 and board[i+1][j-1])
            res++;          
        
        return res;
    }
};