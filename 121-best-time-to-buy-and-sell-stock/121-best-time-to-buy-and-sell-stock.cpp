class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMin=INT_MAX;
        int mx=INT_MIN;
        
        for(int i=0; i<prices.size(); i++){
            currMin=min(currMin, prices[i]);
            mx=max(mx, prices[i]-currMin);
        }
        
        return max(0, mx);
    }
};