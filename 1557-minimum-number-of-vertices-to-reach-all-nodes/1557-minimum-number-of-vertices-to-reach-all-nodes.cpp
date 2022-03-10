class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> to(n, 0);
        
        for(auto i: edges)
            to[i[1]]=1;
        
        vector<int> res;
        
        for(int i=0; i<n; i++){
            if(not to[i])
                res.push_back(i);
        }
        
        return res;
        
    }
};