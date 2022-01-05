class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        int sbc = __builtin_popcount(n);
        if(sbc==1)
            return true;
        return false;
    }
};