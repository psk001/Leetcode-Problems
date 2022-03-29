class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        
        return getPath(m, n, 0, 0, dp);
    }
    
    int getPath(int m, int n, int row, int col, vector<vector<int>>& dp){
        if(row>=m || col>=n)
            return 0;
        
        if(row==m-1 and col==n-1)
            return 1;
        
        if(dp[row][col] != -1)
            return dp[row][col];
        
        int gpr=getPath(m, n, row, col+1, dp);
        int gpb=getPath(m, n, row+1, col, dp);
        
        dp[row][col]=gpr+gpb;
        
        return dp[row][col];
        
    }
    
};