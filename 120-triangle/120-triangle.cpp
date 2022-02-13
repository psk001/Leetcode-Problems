class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int n=t.size();
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        return getMin(dp, t, 0, 0, n);
        
    }
    
    int getMin(vector<vector<int>>& dp, vector<vector<int>>& t, int cr, int cl, int n){
        if(cl>=n || cl<0) 
            return INT_MAX;
        
        if(cr>=n)
            return 0;
        
        if(dp[cr][cl] != -1)
            return dp[cr][cl];
        
        
        int c1 = getMin(dp, t, cr+1, cl, n);
        int c2 = getMin(dp, t, cr+1, cl+1, n);
        
        dp[cr][cl] =  min(c1, c2) + t[cr][cl];
        
        return dp[cr][cl];
        
    }
};