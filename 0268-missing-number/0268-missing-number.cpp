class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; ){
            if(i==nums[i])
                i++;
            else
                return i;
        }
        
        return nums[n-1]+1;
    }
};