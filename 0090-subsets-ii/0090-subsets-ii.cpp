class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        set<vector<int>> s;
        vector<vector<int>> res;
                
        vector<int> t;
        ss(nums, s, 0, t);
        
        for(auto i: s)
            res.push_back(i);
        
        return res;
    }
    
    void ss(vector<int>& nums, set<vector<int>>& s, int idx, vector<int> temp){
        if(idx==nums.size()){
            s.insert(temp);
            return;
        }
            
        ss(nums, s, idx+1, temp);
        temp.push_back(nums[idx]);
        ss(nums, s, idx+1, temp);
        
        return;
    }
};