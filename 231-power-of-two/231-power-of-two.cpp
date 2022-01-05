class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return 0;
        int k = log2(n);
        if(pow(2, k)==n)
            return 1;
        else
            return 0;
    }
};