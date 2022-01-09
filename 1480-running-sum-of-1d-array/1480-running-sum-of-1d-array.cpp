class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        res.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++)
            res.push_back(nums[i]+res[i-1]);
        
        return res;
    }
};