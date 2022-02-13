class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        
        int p=__builtin_popcount(n);
        
        return (p==1);
    }
};