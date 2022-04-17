class Solution {
    int m, n;
    
public:
    int numEnclaves(vector<vector<int>>& grid) {
        m=grid.size(), n=grid[0].size();
        int res=0;
        
        for(int i=0; i<n; i++){
            if(grid[0][i]==1)
                dfs(grid, 0, i);
            
            if(grid[m-1][i]==1)
                dfs(grid, m-1, i);
        }
        
        for(int i=0; i<m; i++){
            if(grid[i][0]==1)
                dfs(grid, i, 0);
        
            if(grid[i][n-1]==1)
                dfs(grid, i, n-1);
        }        
        
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(grid[i][j]==1)
                    res++;
        
        return res;
    }
    
    void dfs(vector<vector<int>>& grid, int cr, int cc){
        if(cr<0 or cc<0 or cr>=m or cc>=n)
            return;
        
        if(grid[cr][cc]==0 or grid[cr][cc]==-1)
            return;
        
        grid[cr][cc]=-1;
        
        dfs(grid, cr+1, cc);
        dfs(grid, cr-1, cc);
        dfs(grid, cr, cc+1);
        dfs(grid, cr, cc-1);
        
    }
};