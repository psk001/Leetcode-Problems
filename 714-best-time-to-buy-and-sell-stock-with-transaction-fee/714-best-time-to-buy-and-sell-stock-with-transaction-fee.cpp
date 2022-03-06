class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        if(prices.size()==1)
            return 0;
        if(prices.size()==2)
            return max(0, prices[1]-prices[0]-fee); 
        
        int n=prices.size();
        
        vector<int> bsp(n, 0);
        vector<int> ssp(n, 0);
        
        bsp[0]=-1*prices[0];
        // cout << bsp[0] << "  " << ssp[0] << endl;
        for(int i=1; i<n; i++){
            bsp[i]=max(ssp[i-1]-prices[i], bsp[i-1]);
            ssp[i]=max(ssp[i-1], prices[i]+bsp[i-1]-fee);
            // cout << bsp[i] << "  " << ssp[i] << endl;
        }
        
        return ssp[n-1];
    }
    

};