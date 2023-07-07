class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int left=0, right=0, cs=0;
        int res= INT_MAX;
                
        for(right=0; right<n; right++){
            cs+= nums[right];
            
            while(cs>=target){
                res= min(res, right-left+1);
                cs-=nums[left];
                left++;
            }
        }
        
        res = (res== INT_MAX) ? 0 : res;
        
        return res;
               
    }
};