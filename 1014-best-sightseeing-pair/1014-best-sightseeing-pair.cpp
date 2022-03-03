class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& nums) {
        int res=INT_MIN;
        vector<int> rp(nums.size(), -1);
        vector<int> rn(nums.size(), -1);

        
        for(int i=0; i<nums.size(); i++){
            rp[i]=nums[i]+i;
            rn[i]=nums[i]-i;
        }
        
        vector<int> mx(nums.size(), 0);        
        mx[nums.size()-1]=rn[nums.size()-1];
        for(int i=nums.size()-2; i>=0; i--)
            mx[i]=max(rn[i+1], mx[i+1]);
        
        for(int i=0; i<nums.size()-1; i++)
            res=max(res, rp[i]+mx[i]);
        
        return res;
    }
};