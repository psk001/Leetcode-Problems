class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        return (not (n & (n-1)));
    }
};