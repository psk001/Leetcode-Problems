class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
        map<int, long> st;
        
        return solve(q, st, 0, 0);
    }
    
    long long solve(vector<vector<int>>& q, map<int, long>& st, int currIdx, int res){
        if(currIdx>q.size()-1){
            return res;
        }
        
        if (st[currIdx]!=0)
            return st[currIdx];
        
        auto ca= q[currIdx];
                
        long long solveCurr= ca[0]+solve(q, st, currIdx+ca[1]+1, res);
        long long skipCurr= solve(q, st, currIdx+1, res);
        
        st[currIdx]= max(solveCurr, skipCurr);
        
        return st[currIdx];
    }
};