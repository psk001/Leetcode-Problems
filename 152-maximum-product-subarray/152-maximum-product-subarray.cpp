class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int mxm=nums[0];
        int mnm=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<0)
                swap(mxm, mnm);
            
            mxm=max(nums[i], mxm*nums[i]);
            mnm=min(nums[i], mnm*nums[i]);
            res=max(res, mxm);
            
        }
        return res;
        
    }
};