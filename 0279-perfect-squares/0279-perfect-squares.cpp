class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1, INT_MAX);
        dp[0]=0;
        
        int cnum=1;
        while(cnum*cnum<=n){
            int cp=cnum*cnum;
            for(int i=cp; i<=n; i++)
                dp[i]=min(dp[i], dp[i-cp]+1);
            cnum++;
        }

        return dp[n];
    }
   
};