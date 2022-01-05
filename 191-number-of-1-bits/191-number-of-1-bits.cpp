class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sbc = __builtin_popcount(n);
        return sbc;
    }
};