class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> dp(n+1);
        
        int csum=0, res=INT_MIN;
        
        for(int i=0; i<n; i++){
            csum += nums[i];
            res=max(res, csum);
            
            if(csum<0)
                csum=0;
            
        }
        
        return res;
            
    }
};