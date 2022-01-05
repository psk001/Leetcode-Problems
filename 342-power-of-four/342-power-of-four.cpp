class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        int val = log2(n)/2;
        return (pow(4, val)==n);
    }
};