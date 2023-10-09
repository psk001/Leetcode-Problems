class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=1, fo=-1, lo=-1;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                if(f){
                    fo=i;
                    f=0;
                }
                lo= i;
            }
        }
        
        return {fo, lo};
    }
};