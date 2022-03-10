class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& iv) {
        if(iv.size()==1)
            return 0;
        
        sort(iv.begin(), iv.end());
        
        int res=0;
        int l=0, r=1;
        
        while(r<iv.size()){
            if(iv[l][1]<=iv[r][0]){
                l=r;
            }
            
            else if(iv[l][1] <= iv[r][1]){
                res++;
            }
            
            else if(iv[l][1] > iv[r][1]){
                res++;
                l=r;
            }
            
            r++;
        }
        
        
        return res;
    }
    
    // bool st(vector<int> p, vector<int> q){
    //     return (p[0]<q[0]);
    // }
    
};