class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int l=nums[0]*nums[1]*nums[nums.size()-1];
        int r=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        
        return max(l, r);
    }
};