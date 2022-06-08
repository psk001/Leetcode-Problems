class Solution {
    int m,n;
public:
    int minPathSum(vector<vector<int>>& grid) {
        m= grid.size(), n=grid[0].size();
        vector<vector<int>>dp(m, vector<int>(n, 0));
                    
        return getSum(grid, dp, 0, 0);;
    }
    
    int getSum(vector<vector<int>>& grid, vector<vector<int>>& dp, int row, int col){
        if(row>=m || col>=n)
            return INT_MAX;
                
        if(row==m-1 and col==n-1)
            return grid[row][col]+dp[row][col];
        
        if(dp[row][col] !=0)
            return dp[row][col];
        
        int nextRow= getSum(grid, dp, row+1, col);
        int nextCol= getSum(grid, dp, row, col+1);
      
        dp[row][col]=grid[row][col]+min(nextRow, nextCol);
        
        return dp[row][col];  //7300599801
    }
};