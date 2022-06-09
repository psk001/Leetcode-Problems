class Solution {
    int m, n;
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        m=matrix.size(), n=matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 101));
        
        int res=INT_MAX;
        for(int i=0; i<n; i++)
            res=min(res, getSum(matrix, dp, 0, i));
        
        return res;
    }
    
    int getSum(vector<vector<int>>& matrix, vector<vector<int>>& dp, int crow, int ccol){
        if(crow>=m)
            return 0;
        
        if(ccol<0 or ccol>=n)
            return INT_MAX;
        
        if(dp[crow][ccol]!=101)
            return dp[crow][ccol];
        
        int nrpc= getSum(matrix, dp, crow+1, ccol-1);
        int nrsc= getSum(matrix, dp, crow+1, ccol);
        int nrnc= getSum(matrix, dp, crow+1, ccol+1);
        
        dp[crow][ccol]= matrix[crow][ccol]+ min(nrpc, min(nrsc, nrnc));
        
        return dp[crow][ccol];
    }
};