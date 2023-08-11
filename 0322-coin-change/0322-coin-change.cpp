class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX-1);
        
        dp[0]=0;
        sort(coins.begin(), coins.end());
        for(int i=1; i<=amount; i++){
            // cout << " i: " << i << endl;
            for(auto c: coins){
                if(c>i)
                    break;
                
                dp[i]= min(dp[i], 1+dp[i-c]);
            }
        }
        
        return (dp[amount]==INT_MAX-1? -1: dp[amount]);
    
    }
};