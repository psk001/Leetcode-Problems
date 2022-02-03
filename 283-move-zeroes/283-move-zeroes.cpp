class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int l=0, i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[l], nums[i]);
                l++;
            }            
        }
        
        return;
    }
};