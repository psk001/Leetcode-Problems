class Solution {
    
public:
    int findMaxForm(vector<string>& strs, int m, int n) {   
        vector<vector<int>> dp (m+1, vector<int> (n+1));
        
        for(auto& str: strs){
            int zrs = count(str.begin(), str.end(), '0');
            int ons = str.size()-zrs;
            
            for(int i=m; i>=zrs; i--){
                for(int j=n; j>=ons; j--)
                    dp[i][j] = max(dp[i][j], 1 + dp[i-zrs][j-ons]);
            }
        }
        
        return dp[m][n];
        
    }
};
   