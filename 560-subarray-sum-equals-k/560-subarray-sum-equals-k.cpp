class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int res=0;
        int sm=0;
        unordered_map<int, int> col;
        
        col[0]=1;
        
        for(int i=0; i<nums.size(); i++){
            sm+=nums[i];
            res+=col[sm-k];
            col[sm]++;
        }
        
        return res;
        
    }
};
    
