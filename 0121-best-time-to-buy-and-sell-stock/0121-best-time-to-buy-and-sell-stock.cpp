class Solution {
public:
    int maxProfit(vector<int>& A) {
         int n=A.size();
    if(n<=1)
        return 0;
        
    int cmax=A[n-1], res=INT_MIN;
    
    for(int i=n-1; i>=0; i--){
        cmax= max(cmax, A[i]);
        res= max(res, cmax-A[i]);
    }
    
    return res;      
    }
};