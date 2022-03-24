class Solution {
public:
    int findCircleNum(vector<vector<int>>& grid) {
        int res=0;
        vector<int> visited(grid.size(), 0);
        
        for(int i=0; i<grid.size(); i++){
            if(!visited[i]){
                dfs(grid, visited, i);
                res++;
            }
            
        }
        
        return res;
    }
    
    void dfs(vector<vector<int>>& grid, vector<int>& visited, int idx){

        visited[idx]=1;
        
        for(int i=0; i<grid.size(); i++)
            if(grid[idx][i] and !visited[i])
                dfs(grid, visited, i);
    }
    
};