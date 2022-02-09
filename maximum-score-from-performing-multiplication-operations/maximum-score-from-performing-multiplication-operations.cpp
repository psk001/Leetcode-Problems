class Solution {

    int recurr(vector<int>&nums, vector<int>&multipliers, int i, int k, vector<vector<int>>&dp){
        if(dp[i][k] != -1)
            return dp[i][k];
        
        if(i >= nums.size())
            return 0;
        
        else if(k >= multipliers.size())
            return 0;
      
        int j = i+nums.size()-1-k;
        
        
        
        int a = (nums[i]*multipliers[k])+recurr(nums,multipliers,i+1,k+1,dp);
        int b = (nums[j]*multipliers[k])+recurr(nums,multipliers,i,k+1,dp);
        
        return dp[i][k] = max(a,b);
    }
    
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
        vector<vector<int>>dp(multipliers.size()+1,vector<int>(multipliers.size()+1, -1));
        return recurr(nums,multipliers,0,0,dp);
    }
};