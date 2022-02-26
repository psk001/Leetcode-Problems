class Solution {
public:
    int climbStairs(int n) {
        if(n<3)
            return n;
        
        vector<int> dp(n+1, -1);
        dp[0]=0, dp[1]=1, dp[2]=2;
        climb(n, dp);
        return dp[n];
    }
    
    int climb(int n, vector<int>&dp ){
        if(n<0)
            return 0;
        
        if(n==0)
            return 1;
        
        if(dp[n] !=-1)
            return dp[n];
        
        dp[n] = climb(n-1, dp) + climb(n-2, dp);
        return dp[n];            
    }
};
