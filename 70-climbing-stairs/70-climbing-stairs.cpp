class Solution {
public:
    int climbStairs(int n) {    
        vector<int> res(n, -1);
        return numSteps(res, 0, n);
    }
    
    int numSteps(vector<int>& res, int curr, int n){
        if(curr==n)
            return 1;
        if(curr>n)
            return 0;
        
        if(res[curr] != -1)
            return res[curr];
        
        res[curr]=numSteps(res, curr+1, n)+numSteps(res, curr+2, n);
        
        return res[curr];
    }
    
};