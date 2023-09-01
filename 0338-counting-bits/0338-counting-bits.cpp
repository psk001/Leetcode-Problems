class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        
        res.push_back(0);
        
        int c=1;
        
        for(int i=1; i<=n; i++){
            res.push_back(__builtin_popcount(i));
        }
        
        return res;
    }
};