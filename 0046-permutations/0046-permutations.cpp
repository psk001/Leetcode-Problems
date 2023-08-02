class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
       
        getPerm(nums, res, 0, nums.size());
        
        return res;
    }
    
    void getPerm(vector<int>&nums, vector<vector<int>>& t, int start, int n){
        if(start==n-1){
            t.push_back(nums);
            return;
        }
            
        for(int i=start; i<n; i++){       
            swap(nums[i], nums[start]);
            getPerm(nums, t, start+1, n);
            swap(nums[start], nums[i]);
        }
    }
};