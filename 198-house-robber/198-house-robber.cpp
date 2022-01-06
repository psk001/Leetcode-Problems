class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> money(nums.size(), -1);
                
        return robber(nums, 0, money);
    }
    
    static int robber(vector<int>& nums, int idx, vector<int>& money){ 
        if(idx >= nums.size())
            return 0;
        
        if(money[idx] != -1)
            return money[idx];
        
        money[idx] = max(nums[idx] + robber(nums, idx+2, money),  robber(nums, idx+1, money));
        return money[idx];
    }
};