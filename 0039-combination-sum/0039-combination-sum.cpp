class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& cd, int target) {
        sort(cd.begin(), cd.end());
        
        set<vector<int>> s;
        vector<int> p;
        
        ss(cd, s, p, 0, target);
        
        vector<vector<int>> res;
        
        for(auto i: s)
            res.push_back(i);
        
        return res;
        
    }
    
    void ss(vector<int>& cd, set<vector<int>>& s, vector<int> p, int idx, int t){
        if(t==0){
            s.insert(p);
            return;
        }
        
        if(idx==cd.size())
            return;
        
        if(t<cd[idx])
            return;
        
        ss(cd, s, p, idx+1, t);
        p.push_back(cd[idx]);
        ss(cd, s, p, idx, t-cd[idx]);
                    
    }
};