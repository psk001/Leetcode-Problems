class Solution {
public:
    int hammingWeight(uint32_t n) {
        int p=__builtin_popcount(n);
        return p;
    }
};