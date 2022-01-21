class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int idx = max_element(nums.begin(), nums.end())-nums.begin();
        
        int p= (nums[idx])/2;
        
        for(int i=0; i<nums.size(); i++)
            if(i != idx and nums[i]>p)
                return -1;
        
        return idx;
        
    }
};