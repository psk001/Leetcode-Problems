class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int res=0;
        
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<minprice)
                minprice=prices[i];
            
            res = max(res, prices[i]-minprice);
        }

     
        return res;
    }
};