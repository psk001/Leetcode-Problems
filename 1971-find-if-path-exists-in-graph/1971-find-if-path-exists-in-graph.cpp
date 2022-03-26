class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)
            return true;
        
        map<int, vector<int> > grid;
        
        for(auto i: edges){
            grid[i[0]].push_back(i[1]);
            grid[i[1]].push_back(i[0]);
        }

        
        vector<int> visited(n, 0);
        return dfs(grid, visited, source, destination);
        
    }
    
    bool dfs(map<int, vector<int>>& grid, vector<int>& visited, int source, int d){

        if(source==d)
            return true;

        if(visited[source])
            return false;
        
        visited[source]=1;
        
        for(int i=0; i<grid[source].size(); i++)            
            if(dfs(grid, visited, grid[source][i], d))               
                return true;
        
        return false;
    }
    
};
