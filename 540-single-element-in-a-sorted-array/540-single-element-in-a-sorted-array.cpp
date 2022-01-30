class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        int n=r+1;
        int res=nums[0];
        for(int i=1; i<n; i++)
            res= res^nums[i];
        
        return res;
    }
};