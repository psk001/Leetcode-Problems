class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        int p=0;
        int sbc = __builtin_popcount(n);
        while(n){
            p++;
            n = n>>1;
        }
        
        if(p&1 and sbc==1)
            return true;
        return false;
    }
};