class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> col;
        
        for(int i=0;i<mat.size();i++){
            int t=0;
            
            for(int j=0;j<mat[0].size();j++)
                t+=mat[i][j];
            
            col.push_back({t, i});
         }
        
        sort(col.begin(), col.end(), b);
        vector<int> res;
        for(int i=0;i<k;i++)
            res.push_back(col[i].second);
        
        return res;
        }
    
    static bool b(pair<int, int> a, pair<int, int> b){
        if(a.first==b.first)
            return a.second<b.second;
        
        return (a.first<b.first);
        }
};