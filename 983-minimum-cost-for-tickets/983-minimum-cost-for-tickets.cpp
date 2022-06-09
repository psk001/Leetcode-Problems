class Solution {
    map<int, int> dp;
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        for(auto i: days)
            dp[i]=-1;
        
        return getCost(days, costs, 0);   
    }
    
    int getCost(vector<int>& days, vector<int>& costs, int idx){
        if(idx>=days.size())
            return 0;
        
        if(dp[days[idx]] != -1)
            return dp[days[idx]];
        
        int odp= costs[0]+ getCost(days, costs, lower_bound(days.begin(), days.end(), days[idx]+1)-days.begin());
        
        int sdp= costs[1]+ getCost(days, costs, lower_bound(days.begin(), days.end(), days[idx]+7)-days.begin());
        
        int tdp= costs[2]+ getCost(days, costs, lower_bound(days.begin(), days.end(), days[idx]+30)-days.begin());
        
        dp[days[idx]]= min(odp, min(sdp, tdp));
        
        return dp[days[idx]];
    }
};