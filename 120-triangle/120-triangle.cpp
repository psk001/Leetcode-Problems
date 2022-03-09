class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // if(triangle.size()==1)
        //     return triangle[0][0];
        
        int n=triangle.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
       
        return sum(triangle, 0, 0, dp, n);

    }
    
    int sum(vector<vector<int>>& triangle, int crow, int ccol, vector<vector<int>>& dp, int n){
        if(ccol>=n || ccol<0) 
            return INT_MAX;
        
        if(crow>=n)
            return 0;
        
        if(dp[crow][ccol] != -1)
            return dp[crow][ccol];
        
        int scol=sum(triangle, crow+1, ccol, dp, n);
        int ncol=sum(triangle, crow+1, ccol+1, dp, n);
        
        dp[crow][ccol]=triangle[crow][ccol]+min(scol, ncol);
        
        return dp[crow][ccol];
    }
    
};