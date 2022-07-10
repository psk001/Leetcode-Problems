class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
                
        return min(getSum(cost, dp, 0) , getSum(cost, dp, 1));
        
    }
    
    int getSum(vector<int>& cost, vector<int>&dp, int curr){
        if(curr>=cost.size())
            return 0;
        
        if(dp[curr]!=-1)
            return dp[curr];
        
        int tk=getSum(cost, dp, curr+1);
        int tl=getSum(cost, dp, curr+2);
        
        dp[curr]=cost[curr]+min(tk, tl);
        return dp[curr];        
    }
};