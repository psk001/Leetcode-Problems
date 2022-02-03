class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int r=nums.size()-1, l=0;
        vector<int> res(nums.size());
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                res[r]=0;
                r--;
            }
            else{
                res[l]=nums[i];
                l++;
            }
        }
        nums=res;
        
        return;
    }
};