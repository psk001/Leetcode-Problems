class Solution {
public:
    int bitwiseComplement(int n) {
        if(not n)
            return 1;
        
        int x = log2(n) + 1;
        int res=n;
        for (int i = 0; i < x; i++)
           res = (res ^ (1 << i));

        return res;
    }
};