class Solution {
public:
    int fib(int n) {
        vector<int> col{0, 1};
        for(int i=2; i<n+1; i++)
            col.push_back(col[i-1]+col[i-2]);
        
        return col[n];
    }
};