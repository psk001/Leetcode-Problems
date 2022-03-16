class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)
            return 1;
        
        int l=0;
        
        for(int r=0; r<nums.size(); r++){
            if(nums[l]!=nums[r]){
                l++;
                nums[l]=nums[r];
            }
        }
        
        return l+1;
    }
};