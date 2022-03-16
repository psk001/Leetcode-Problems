class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)
            return 1;
        
        for(int i=0; i<nums.size()-1; ){
            if(nums[i]==nums[i+1])
                nums.erase(nums.begin()+i+1);
            else
                i++;
        }
        
        return nums.size();
    }
};