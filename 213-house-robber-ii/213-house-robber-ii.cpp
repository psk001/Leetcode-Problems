class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        if(nums.size()==2)
            return max(nums[0], nums[1]);        

        vector<int>v1(nums.begin(), nums.end()-1);
        vector<int>v2(nums.begin()+1, nums.end());
        
        vector<int>dp1(v1.size(), -1);
        vector<int>dp2(v2.size(), -1);
        
        return max(robb(v1, dp1, 0), robb(v2, dp2, 0));
        
    }
    
    int robb(vector<int>& nums, vector<int>&dp, int idx){
        if(idx>=nums.size())
            return 0;
        
        if(dp[idx]!=-1)
            return dp[idx];
        
        int tk=nums[idx]+robb(nums, dp, idx+2);
        int nt=robb(nums, dp, idx+1);
        
        dp[idx]=max(tk, nt);
        return dp[idx];
    }
};