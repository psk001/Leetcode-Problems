class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& nums) {
        int res=INT_MIN;
        int leftmax=nums[0]+0;
        
        for(int i=1; i<nums.size(); i++){
            int cscore=leftmax+nums[i]-i;
            res=max(res, cscore);
            leftmax=max(leftmax, nums[i]+i);
        }
        
        return res;
    }
};