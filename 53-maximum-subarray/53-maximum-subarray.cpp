class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        int cmax=0, res=INT_MIN;
        
        for(auto i: nums){
            cmax+=i;
            res=max(res, cmax);
            cmax=max(cmax, 0);
        }
        return res;
    }
};