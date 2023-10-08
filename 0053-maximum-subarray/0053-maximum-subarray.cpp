class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int res=INT_MIN;
        int csum= 0;
        
        for(int i=0; i<n; i++){
            if(csum<=0)
                csum=0;
            csum+= nums[i];
            res=max(res, csum);
        }
        
        
        // res= max(res, csum);
        
        return res;
    }
};