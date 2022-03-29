class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        if(grid[m-1][n-1]==1 || grid[0][0]==1)
            return 0;
        
        vector<vector<int>> dp(m, vector<int>(n, -1));
        
        return getPath(grid, dp, m, n, 0, 0);
    }
    
    int getPath(vector<vector<int>>& grid, vector<vector<int>>& dp, int m, int n, int row, int col){
        if(row>=m || col>=n)
            return 0;
        
        if(row==m-1 and col==n-1)
            return 1;
        
        // if(row==m-1 and col==n-1 and grid[row][col]==1)
        //     return 0;
        
        if(grid[row][col]==1)
            return 0;
        
        if(dp[row][col] != -1)
            return dp[row][col];
        
        int gpr=getPath(grid, dp, m, n, row+1, col);
        int gpc=getPath(grid, dp, m, n, row, col+1);
        
        dp[row][col]=gpr+gpc;
        
        return dp[row][col];
        
    }
    
};