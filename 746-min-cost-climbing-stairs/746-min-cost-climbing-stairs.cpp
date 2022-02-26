class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==2)
            return min(cost[0], cost[1]);
        
        vector<int> dp(cost.size(), -1);
        // dp[0]=cost[0], dp[1]=min(cost[0], cost[1]);
        
        int s0=minCost(cost, dp, 0);
        int s1=minCost(cost, dp, 1);
        
        return min(s0, s1);            
    }
    
    int minCost(vector<int>& cost, vector<int>& dp, int idx){
        if(idx>=cost.size())
            return 0;
        
        if(dp[idx]!=-1)
            return dp[idx];
        
        int tk = cost[idx]+minCost(cost, dp, idx+1);
        int nt = cost[idx]+minCost(cost, dp, idx+2);
        
        dp[idx] = min(tk, nt);
        
        return dp[idx];
    }
};