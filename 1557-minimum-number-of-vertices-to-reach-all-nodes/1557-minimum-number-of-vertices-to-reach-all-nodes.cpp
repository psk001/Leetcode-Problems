class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> hasIncomingEdge(n, false);
        
        for(auto edge: edges){
            hasIncomingEdge[edge[1]]= true;
        }
        
        vector<int> res;
        
        for(int i=0; i<n; i++){
            if(!hasIncomingEdge[i])
                res.push_back(i);
        }
        
        return res;
    }
};