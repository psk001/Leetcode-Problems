class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        
        vector<vector<int> > res;
        vector<int> temp;
        
        getSubsets(temp, n-1, nums, res);
        
        return res;
        
    }
    
    void getSubsets(vector<int> temp, int n, vector<int>  nums, vector<vector<int> >& res){
        if(n<0){
            res.push_back(temp);
            return;
        }
        
        getSubsets(temp, n-1, nums, res);
        temp.push_back(nums[n]);
        getSubsets(temp, n-1, nums, res);
        
    }
    
    
};
