class Solution {
private:
    bool bipartiteBFS(int node,vector<vector<int>>&graph,vector<int>&color){
        queue<int>q;
        q.push(node);
        color[node]=1;
        while(!q.empty()){
            int adjacent = q.front();
            q.pop();

            for(auto it:graph[adjacent]){
                if(color[it]==-1){
                    color[it] = 1 - color[adjacent];
                    q.push(it);
                }
                else if(color[it]==color[adjacent]){
                    return false;
                }
            }
        }
        return true;
    }
    
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(!bipartiteBFS(i,graph,color)){
                    return false;
                }
            }
        }
        return true;
    }
};