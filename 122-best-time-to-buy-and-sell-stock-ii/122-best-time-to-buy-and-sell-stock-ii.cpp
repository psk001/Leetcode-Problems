class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
        
        if(prices.size()==2)
            return max(0, prices[1]-prices[0]);
        
        int n=prices.size();
        int res=0, b=0, s=0;
        
        for(int i=1; i<n; i++){
            if(prices[i]>=prices[i-1])
                s++;
            else{
                res += prices[s]-prices[b];
                s=i;
                b=i;
            }
            // cout << "s " << s << " b: " << b  << endl;
            // cout << "res " << res << endl;
        }

        res += prices[s]-prices[b];
        return max(0, res);        
        
    }
};