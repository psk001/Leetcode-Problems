class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0, r= nums.size()-1;
        
        while(l<r){
            int k= nums[l]+nums[r];
            if(k==target)
                return {l+1, r+1};
            
            else if(k<target)
                l++;
            
            else
                r--;
        }
        
        return {};
    }
};