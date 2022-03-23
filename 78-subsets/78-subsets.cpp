class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size()==1)
            return {{}, {nums[0]}};
        
        vector<vector<int> >  res;
        vector<int> t;
        getSub(nums, res, 0, t);
        
        return res;
    }
    
    void getSub(vector<int>& nums, vector<vector<int> > &res, int idx, vector<int> temp){
        if(idx==nums.size()){
            res.push_back(temp);
            return ;
        }
        
        getSub(nums, res, idx+1, temp);
        temp.push_back(nums[idx]);
        getSub(nums, res, idx+1, temp);
            
    }
};