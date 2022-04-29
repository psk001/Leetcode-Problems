class Solution {
    vector<pair<int, int>> adj[101];
    
    void dfs(vector<int>& rec, int cnode, int ctime){
        if(ctime>=rec[cnode])
            return;
        
        rec[cnode]=ctime;
        
        for(auto edge: adj[cnode]){
            int travelTime=edge.first;
            int nextNode=edge.second;
            
            dfs(rec, nextNode, ctime+travelTime);
        }
        
    }
    
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for(auto u: times){
            int src=u[0];
            int dest=u[1];
            int tTime=u[2];
            
            adj[src].push_back({tTime, dest});
        }
        
        for(int i=1; i<=n; i++)
            sort(adj[i].begin(), adj[i].end());
        
        vector<int> rec(n+1, INT_MAX);
        dfs(rec, k, 0);
        
        int res=INT_MIN;
        
        for(int i=1; i<=n; i++)
            res=max(res, rec[i]);
        
        return (res==INT_MAX? -1 : res);
    }
};