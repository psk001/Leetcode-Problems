class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1 and nums[0]>0)
            return true;
        
        vector<bool> dp(nums.size(), false);
        
        int req=0;
        
        for(int i=nums.size()-1; i>= 0; i--){
            if(req<=nums[i])
                req=0;
            
            req++;
        }
        
        return (req==1);
        
    }
    
//     bool jump(vector<int>& nums, int idx, int val){
        
//     }
};