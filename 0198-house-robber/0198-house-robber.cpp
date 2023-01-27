class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> col(nums.size(), -1);
        return mon(nums, col, 0);
    }
    
    int mon(vector<int>& nums, vector<int>& col, int idx){
        if(idx>=nums.size()){
            return 0;
        }
        
        if(col[idx]!=-1)
            return col[idx];
        
        int tk= nums[idx]+mon(nums, col, idx+2);
        int nt= mon(nums, col, idx+1);
        col[idx]= max(tk, nt);
        return col[idx];
    }
};