class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        
        vector<vector<int>> dp(m+1, vector<int>(mat[0].size()+1, 0));
        
        for(int i=1; i<=m; i++){
            for(int j=1; j<dp[0].size(); j++)
                dp[i][j]=dp[i-1][j] + dp[i][j-1] + mat[i-1][j-1] - dp[i-1][j-1];
        }
        
        vector<vector<int>> res(m, vector<int>(mat[0].size(), 0));
        
        for(int i=0; i<m; i++){
            for(int j=0; j<mat[0].size(); j++){
                int n=mat[i].size();
                
                int r1=max(0, i-k)+1;
                int c1=max(0, j-k)+1;
                
                int r2=min(m, i+k+1);
                int c2=min(n, j+k+1);
                
                res[i][j] = dp[r2][c2]+dp[r1-1][c1-1] - dp[r1-1][c2] - dp[r2][c1-1];
            }
        }
        
        return res;
    }
};