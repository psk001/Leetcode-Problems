class Solution {
public:
    int climbStairs(int n) {
        vector<int> col{0,1,2};
        
        for(int i=3; i<=n; i++)
            col.push_back(col[i-1]+col[i-2]);
        
        return col[n];
    }
};