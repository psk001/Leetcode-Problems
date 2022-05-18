class Solution {
public:
vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections){
      
        vector<int> tin(n, -1), low(n, -1), vis(n, 0);
    
        vector<vector<int>> res;
        vector<int> graph[n]; 
    
        int time=0;
        
        for(auto i: connections){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        
    
        dfs(0, -1, tin, low, vis, graph, res, time);
        return res;
    }
    
    void dfs(int node, int parent, vector<int> &tin, vector<int> &low, vector<int> &vis, vector<int> graph[], vector<vector<int>> &res, int &time) {
        
        time++;
        tin[node]=time;
        low[node]=time;
        
        vis[node] = 1;
        
        for(auto i: graph[node]){
            if(i==parent) 
                continue;
            
            if(not vis[i]) {
                dfs(i, node, tin, low, vis, graph, res, time);

                low[node] = min(low[node], low[i]);
                
                if(low[i] > tin[node])
                    res.push_back({node, i});
            }
            
            else
                low[node] = min(low[node], tin[i]);
            
        }
    }
};
