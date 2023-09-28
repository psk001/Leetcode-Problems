class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        res.push_back({});
        
        vector<int> t;
        ss(nums, s, 0, t);
        
        for(auto i: s)
            res.push_back(i);
        
        return res;
    }
    
    void ss(vector<int>& nums, set<vector<int>>& s, int idx, vector<int> temp){
        if(idx==nums.size())
            return;
        
        temp.push_back(nums[idx]);
        s.insert(temp);
        
        ss(nums, s, idx+1, temp);
        
        temp.erase(temp.begin()+temp.size()-1);
        ss(nums, s, idx+1, temp);
        
        return;
    }
};