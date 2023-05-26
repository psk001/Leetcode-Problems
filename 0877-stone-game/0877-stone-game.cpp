class Solution {
public:
    int sm;
    bool stoneGame(vector<int>& piles) {
        int n= piles.size();
        
        int dp[n+2][n+2];
        memset(dp, 0, sizeof(dp));
        
        for(int size=1; size<=n; size++){
            for(int i=0, j=size-1; j<n; i++, j++){
                int chance= (j+i+n)%2;
                
                if(chance==1){
                    dp[i+1][j+1]= max(piles[i]+dp[i+2][j+1], piles[j]+dp[i+1][j]);
                }else{
                    dp[i+1][j+1]= min(-piles[i]+dp[i+2][j+1], -piles[j]+dp[i+1][j]);
                }
                
            }
        }
       
        return dp[1][n]>0;
    }
    
};