class Solution {
    int result=0;
public:
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++)
                if(grid[i][j]=='1'){
                    getNum(grid, i, j);
                    res++;
                }
        }
        return res;
        
    }
    
    void getNum(vector<vector<char>>& grid, int row, int col){
        if(row>= grid.size() || col>=grid[0].size() || row<0 || col<0)
            return;
        
        if(grid[row][col]=='0' || grid[row][col]=='2')
            return;
        
        grid[row][col]='2';
        
        getNum(grid, row-1, col);
        getNum(grid, row+1, col);
        getNum(grid, row, col+1);
        getNum(grid, row, col-1);
        
    }
    
};