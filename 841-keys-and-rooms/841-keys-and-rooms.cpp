class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        
        vector<int> visited(n, 0);   
        
        dfs(rooms, 0, visited);
        
        for(auto i: visited)
            if(not i)
                return false;
                
        return true;
        
    }
    
    void dfs(vector<vector<int>> &graph, int s, vector<int> &vis){
        vis[s] = true;
        for(int i = 0; i < graph[s].size(); i++){
            if(!vis[graph[s][i]]){
                dfs(graph, graph[s][i], vis);
            }
        }
    }    
};