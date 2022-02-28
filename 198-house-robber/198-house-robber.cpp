class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        vector<int> dp(nums.size(), -1);
        return rob(nums, dp, 0);
    }
    
    int rob(vector<int>& nums, vector<int>& dp, int idx){
        if(idx>=nums.size())
            return 0;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        int tk = nums[idx]+rob(nums, dp, idx+2);
        int nt = rob(nums, dp, idx+1);
        
        dp[idx]=max(tk, nt);
        
        return dp[idx];        
    }
};