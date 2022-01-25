class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reqSteps=0;
        
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]>=reqSteps)
                reqSteps=0;
            
            reqSteps++;
        }
        
        if(reqSteps==1)
            return true;
        
        return false;
    } 
    

};