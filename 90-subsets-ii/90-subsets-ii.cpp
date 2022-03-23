class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> temp;
        
        vector<int> t;
        getSub(nums, temp, t, 0);
        
        vector<vector<int> > res;
        
        for(auto i: temp)
            res.push_back(i);
        
        return res;
        
    }
    
    void getSub(vector<int>& nums, set<vector<int> >& res, vector<int> temp, int idx){
        if(idx==nums.size()){
            sort(temp.begin(), temp.end());
            res.insert(temp);
            return;
        }
        
        getSub(nums, res, temp, idx+1);
        temp.push_back(nums[idx]);
        getSub(nums, res, temp, idx+1);
        
    }
    
};