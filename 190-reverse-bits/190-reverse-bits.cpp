class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        int k=32;
        while(k--){
            int t=n&1;
            n = n>>1;
            res = (res<<1) | t;
        }
        
        return res;
    }
};