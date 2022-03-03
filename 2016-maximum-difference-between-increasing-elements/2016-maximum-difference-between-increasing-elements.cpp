class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int cmin=INT_MAX;
        int res=0;
        
        for(int i=0; i<nums.size(); i++){
            cmin=min(cmin, nums[i]);
            res=max(res, nums[i]-cmin);
        }
        
        res= (res==0) ? -1 : res;
        return res;
        
    }
};