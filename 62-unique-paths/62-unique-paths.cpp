class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int> > dp(m, vector<int> (n, 0));
        dp[0][0]=1;
        
        return numPath(m-1, n-1, dp);
    }
    
    static int numPath(int m, int n, vector<vector<int> > &dp){
        if(m==0 and n==0)
            return 1;
        
        if(m<0 || n<0)
            return 0;
        
        if(dp[m][n]>0)
            return dp[m][n];
        
        dp[m][n]=numPath(m-1, n, dp) + numPath(m, n-1, dp);
        
        return dp[m][n];
    }
};