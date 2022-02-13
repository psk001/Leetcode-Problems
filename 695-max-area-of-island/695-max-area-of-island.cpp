class Solution {
    vector<vector<int> > grid;
    vector<vector<int> > seen;
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=0;
        int m=grid.size(), n=grid[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                  //  cout << "curr res: " << res << endl;
                    res = max(res, getArea(grid, i, j));
                    // cout << "for i: " << i << " and j: " << j << endl;
                    // cout << "new res: " << res << endl << endl;
                }
            }
        }
        
       // cout << "final grid: \n";
        
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++)
        //         cout << grid[i][j] << " ";
        //     cout << endl;
        // }
        
        
        return res;
    }
    
    int getArea(vector<vector<int>>& grid, int r, int c){
      //  cout << "r: " << r << " c: " << c << endl;
        if(r>=grid.size() || c>=grid[0].size() || r<0 || c<0)
            return 0;
        
        // cout << "after first if: \n";
        // cout << "curr grid[r][c]: " << grid[r][c] << endl << endl;
        if(grid[r][c]==-1 || grid[r][c]==0)
            return 0;
        
        int r1, c1, r2, c2;
        
        if(grid[r][c]==1){
            grid[r][c]=-1;
            r1 = getArea(grid, r+1, c);
            c1 = getArea(grid, r, c+1);
            r2 = getArea(grid, r-1, c);
            c2 = getArea(grid, r, c-1);            
        }
        
        
        return 1+r1+c1+r2+c2;
    }
    

};