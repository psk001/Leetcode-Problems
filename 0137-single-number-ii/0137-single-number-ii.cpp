class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        // for(auto i: nums)
        //     cout << i << " ";
        // cout << endl;
        
        if(nums.size()==1)
            return nums[0];
        
        if(nums[0]!=nums[1])
            return nums[0];
        
        if(nums[nums.size()-1]!=nums[nums.size()-2])
            return nums[nums.size()-1];
        
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i]!=nums[i-1] and nums[i]!=nums[i+1])
                return nums[i];
        }
        
        return -1;
    }
};