class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, pair<int, int>> col;
        map<int, int> p;
        
        for(auto i: matches){
            p[i[0]]++;
            p[i[1]]++;
            col[i[0]].first++;
            col[i[1]].second++;
        }
        
        
        vector<vector<int>> res;
        
        vector<int> nm, om;
        
        for(auto i: p){
            if(i.second==col[i.first].first)
                nm.push_back(i.first);
            if(col[i.first].second==1)
                om.push_back(i.first);            
        }
        
        res.push_back(nm);
        res.push_back(om);
                
        return res;
        
    }
};