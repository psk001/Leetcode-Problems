class Solution {
public:
    string convertToTitle(int n) {
        string res="";
        
        while(n>0){
            n-=1;
            int q= n/26;
            int r= n%26;
            
            res+=65+r;
            
            n=q;
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};