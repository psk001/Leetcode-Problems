class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        if(matrix.size()==1)
            return matrix[0][0];
        
        int n=matrix.size();
        vector<vector<int> > dp(n+1, vector<int> (n+1, -1));
        int res=INT_MAX;
        
        for(int i=0; i<n; i++)
            res = min(res, fps(matrix, dp, 0, i, n));
        
        return res;
        
    }
    
    int fps(vector<vector<int>>& matrix, vector<vector<int>>& dp, int crow, int ccol, int n){
        if(ccol>=n || ccol<0)
            return INT_MAX;
        
        if(crow>=n)
            return 0;
        
        if(dp[crow][ccol] != -1)
            return dp[crow][ccol];
        
        int pcol = fps(matrix, dp, crow+1, ccol-1, n);
        int scol = fps(matrix, dp, crow+1, ccol, n);
        int ncol = fps(matrix, dp, crow+1, ccol+1, n);
        
        dp[crow][ccol] = matrix[crow][ccol] + min(pcol, min(scol, ncol));
        
        return dp[crow][ccol];        
    }
    
};