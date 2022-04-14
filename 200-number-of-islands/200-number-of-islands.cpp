class Solution {
    int result=0, m, n;
public:
    int numIslands(vector<vector<char>>& grid) {
        
        m=grid.size(), n=grid[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){
                    result++;
                    fill(grid, i, j);
                }
            }
        }
        
        return result;
        
    }
    
    void fill(vector<vector<char>>& grid, int cr, int cc){
        if(cr>=m or cc>=n or cr<0 or cc<0)
            return;
        
        if(grid[cr][cc]=='0')
            return;
        
        grid[cr][cc]='0';
        
        fill(grid, cr+1, cc);
        fill(grid, cr, cc+1);
        fill(grid, cr-1, cc);
        fill(grid, cr, cc-1);
        
    }
    

    
};