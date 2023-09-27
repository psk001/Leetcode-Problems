class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end(), greater<int>());
        vector<vector<int>> dp(amount+1, vector<int>(coins.size()+1, -1));
        
        int k= ncoin(coins, dp, 0, amount);
        
        return (k==INT_MAX-1? -1 : k);
    }
    
    int ncoin(vector<int>& c, vector<vector<int>>& dp, int idx, int t){
      
        if(t<0)
            return INT_MAX-1;
        
        if(t==0)
            return 0;
        
        if(idx==c.size())
            return INT_MAX-1;
        
        if(dp[t][idx]!=-1)
            return dp[t][idx];
    
        int dt= ncoin(c, dp, idx+1, t);
            
        int tk= INT_MAX;
        if(c[idx]<=t)
            tk= 1+ncoin(c, dp, idx, t-c[idx]);
        
        dp[t][idx]= min(tk, dt);
        
        return dp[t][idx];
    }
};