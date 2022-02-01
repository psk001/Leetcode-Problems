class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {       
        if(cost.size()==2)
            return min(cost[0], cost[1]);
        
        vector<int> res(cost.size(), -1);
        
        return min(dp(res, cost, 0), dp(res, cost, 1));
         
    }
    
    int dp(vector<int>& res, vector<int>& cost, int idx){
        if(idx>=cost.size())
            return 0;
        
        if(res[idx] != -1)
            return res[idx];
            
        int ns=cost[idx]+dp(res, cost, idx+1);
        int ts=cost[idx]+dp(res, cost, idx+2);
        
        res[idx]=min(ns, ts);
        
        return res[idx];
    }
};