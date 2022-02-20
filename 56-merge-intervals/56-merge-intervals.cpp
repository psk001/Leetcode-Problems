class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        if(i.size()==1)
            return i;
        
        vector<vector<int>> res;
        
        sort(i.begin(), i.end());
        
        for(auto p: i){
            if(res.empty() or res.back()[1]<p[0])
                res.push_back(p);
            else
                res.back()[1]=max(res.back()[1], p[1]);
        }
        
        return res;
        
    }
};