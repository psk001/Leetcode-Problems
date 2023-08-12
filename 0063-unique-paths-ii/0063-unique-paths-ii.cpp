class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m= grid.size();
        int n= grid[0].size();
        
        vector<vector<int>> dp(m, vector<int> (n, -1));
        
        return solve(grid, 0, 0, dp);
        
    }
    
    int solve(vector<vector<int>>& grid, int cc, int cr, vector<vector<int>>& dp){
        if(cr<0 || cc<0 || cr>=dp.size() || cc>=dp[cr].size())
            return 0;
        
        if(grid[cr][cc]==1)
            return 0;
        
        if(cr==dp.size()-1 and cc==dp[cr].size()-1)
            return 1;
        
        if(dp[cr][cc]!=-1)
            return dp[cr][cc];
                
        int crnc= solve(grid, cc+1, cr, dp);
        int nrcc= solve(grid, cc, cr+1, dp);
        
        dp[cr][cc]= crnc+nrcc;
        
        return dp[cr][cc];
    }
    
    
};