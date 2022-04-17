class Solution {
    int m, n;
public:
    int closedIsland(vector<vector<int>>& grid) {
        int res=0;
        m=grid.size()-1, n=grid[0].size()-1;

        
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(grid[i][j]==0 and dfs(grid, i, j)){
                    res++;
                }
            }
        }
        
        return res;
        
    }
    
    bool dfs(vector<vector<int>>& grid, int cr, int cc){
        if(cr<0 || cc<0 || cr>m || cc>n)
            return false;
        
        if((cr==0 || cc==0 || cr==m || cc==n) and grid[cr][cc]==0)
            return false;   
        
        if(grid[cr][cc]==-1 || grid[cr][cc]==1)
            return true;
                
        grid[cr][cc]=-1;
        
        bool a = dfs(grid, cr+1, cc);
        bool b = dfs(grid, cr, cc+1);
        bool c = dfs(grid, cr-1, cc);
        bool d = dfs(grid, cr, cc-1);   
        
        return (a and b and c and d);
    }
};