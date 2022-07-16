class Solution {
    // int row, col;
    int mod=1000000007;
    // map<pair<int, int>, int> cl;
    
public:
    int findPaths(int m, int n, int numMove, int crow, int ccol) {
        
        vector<vector<int>> dp (m, vector<int>(n, 0));
        
        // int dp[m][n];
        dp[crow][ccol]=1;
        int count=0;
        
        for(int mv=1; mv<=numMove; mv++){
            // int temp[m][n];
            vector<vector<int>> temp (m, vector<int>(n, 0));
            
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    if(i==m-1)
                        count= (count+dp[i][j])%mod;
                    
                    if(j==n-1)
                        count= (count+dp[i][j])%mod;
                    
                    if(i==0)
                        count= (count+dp[i][j])%mod;
                    
                    if(j==0)
                        count= (count+dp[i][j])%mod;
                    
                    int cr= (( i>0 ? dp[i-1][j]:0 ) + ( i<m-1 ? dp[i+1][j]: 0 ))%mod; 
                    int cl= (( j>0 ? dp[i][j-1]:0 ) + ( j<n-1 ? dp[i][j+1]: 0 ))%mod;
                    
                    temp[i][j]= (cr+ cl) % mod;
                }
            }
            dp= temp;
        }
        return count;
    }
    
};