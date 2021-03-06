class Solution {
public:
    vector<vector<int>> res;  
    void solve(int n, int k,vector<int> v){
        if(k==0){  //base condition
            res.push_back(v);
            return;
        }
        
        if(n==k){
            v.push_back(n);
            solve(n-1,k-1,v);
            v.pop_back();
        }
        else if(n>k){
            solve(n-1,k,v);
            
            v.push_back(n);
            solve(n-1,k-1,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        solve(n,k,v); 
        return res;
    }
};