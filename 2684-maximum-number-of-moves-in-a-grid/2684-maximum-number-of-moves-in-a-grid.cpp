class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<int>>dp (m, vector<int> (n, 0));
        
        vector<int>row {-1,0,1};
        
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                for(auto x: row){
                    
                    if(x+j>=0 && x+j<m && grid[j][i]<grid[j+x][i+1]){
                        dp[j][i]=max(dp[j][i],1+dp[j+x][i+1]);
                    }
                    
                }
            }
        }   
        
        int res=0;
        for(int i=0; i<m; i++){
            res=max(res, dp[i][0]);
        }
        return res;
    }
};