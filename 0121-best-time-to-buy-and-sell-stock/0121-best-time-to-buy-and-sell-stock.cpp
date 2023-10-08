class Solution {
public:
    int maxProfit(vector<int>& A) {
       int n= A.size();
        
        int res= INT_MIN;
        int cmin= A[0];
        
        for(int i=0; i<n; i++){
            cmin= min(cmin, A[i]);
            res= max(res, A[i]-cmin);
        }
        
        
        return res;
    }
};