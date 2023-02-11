class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string> > col;
        
        for(auto i: strs){
            auto temp=i;
            sort(temp.begin(), temp.end());
            col[temp].push_back(i);
        }
        
       vector< vector<string> > res;
        
        
        for(auto i: col){
            vector<string> tm;
            for(auto j: i.second)
                tm.push_back(j);
            res.push_back(tm);
        }
        
        return res;                
        
    }
};