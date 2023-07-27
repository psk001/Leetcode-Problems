class Solution {
public:
    int findCircleNum(vector<vector<int>>& g) {
        int n= g.size();
        
        int res=0;
        vector<int> visited(n);
        
        for(int i=0; i<n; i++){
            if(!visited[i]){
                res++;
                bfs(g, visited, i);
            }
        }
        return res;
    }
    
    void bfs(vector<vector<int>>& g, vector<int>& visited, int start){
        visited[start]=1;
        
        queue<int> q;      
        q.push(start);
        
        while(!q.empty()){
            int node= q.front();
            q.pop();
            
            for(int i=0; i<g.size(); i++){
                if(g[node][i]==1 and !visited[i]){
                    visited[i]=1;
                    // dfs(g, visited, i);
                    q.push(i);
                }
            }
        }
    }
};