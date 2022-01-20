class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int lb=1, ub=*max_element(piles.begin(), piles.end());
        
        while(lb<ub){
            int m=lb+(ub-lb)/2;
            int k=0;
            for(auto i: piles)
                k += i/m + (i%m !=0);
            
            if(k<=h)
                ub=m;
            else
                lb=m+1;
        }
        
        
        return ub;
    }
};