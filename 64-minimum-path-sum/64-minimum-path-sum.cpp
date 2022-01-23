class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector< vector<int> > res(m , vector<int> (n, -1));
        
      //  int res = getSum(m-1, n-1, grid, res);
        
        return getSum(m-1, n-1, grid, res);
    }
    
    int getSum(int m, int n, vector<vector<int>>& grid, vector< vector<int>>& res){
        if(m<0 or n<0)
            return INT_MAX ;
        
        if(m==0 and n==0)
            return grid[m][n];
        
        if(res[m][n] != -1)
            return res[m][n];
        
        int d=getSum(m-1, n, grid, res);
        int r=getSum(m, n-1, grid, res);
        
        int rs=min(d, r)+grid[m][n];
        
        res[m][n] = rs;
        
        return rs;
        
    }
};


