class Solution {
public:
    int numTrees(int n) {
        if(n<=2)
            return n;
        
       vector<int> dp(n+1, 0);
        dp[0]=1, dp[1]=1, dp[2]=2;
        
        for(int i=3; i<=n; i++){
            int curr=0;
            for(int j=0; j<i; j++){
                curr+=dp[j]*dp[i-1-j];
                // cout << "curr: " << curr << endl;
            }
            // cout << endl;
            dp[i]=curr;
        }
        
        return dp[n];
    }
};