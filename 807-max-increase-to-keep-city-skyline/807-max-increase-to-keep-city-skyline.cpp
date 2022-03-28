class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> tmp(n, vector<int>(n, -1));
        
        for(int i=0; i<n; i++){
            int t=-1;
            for(int j=0; j<n; j++)
                t=max(t, grid[i][j]);
            
            for(int k=0; k<n; k++)
                tmp[i][k]=t;
        }

    
        for(int i=0; i<n; i++){
            int t=-1;
            for(int j=0; j<n; j++)
                t=max(t, grid[j][i]);
            
            for(int k=0; k<n; k++)
                tmp[k][i]=min(t, tmp[k][i]);
        }        
        
        int res=0;
        
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                res += tmp[i][j] - grid[i][j];

        
        return res;
            
    }
};