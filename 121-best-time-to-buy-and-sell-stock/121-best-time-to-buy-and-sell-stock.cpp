class Solution {
public:
    int maxProfit(vector<int>& p) {
        if(p.size()==1)
            return 0;
        
        if(p.size()==2)
            return max(0, p[1]-p[0]);
        
        int left=0, right=p.size();
        int res=0;
        int cmin=INT_MAX;
        
        for(int i=0; i<right; i++){
            cmin=min(cmin, p[i]);
            res=max(res, p[i]-cmin);
        }
        return res;
    }
};