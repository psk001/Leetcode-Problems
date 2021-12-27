class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        
        vector<int> ub(matrix.size());
        
        for(int i=0; i<m; i++)
            ub[i] = matrix[i][n-1];
        
        auto sr = lower_bound(ub.begin(), ub.end(), target)-ub.begin();
        
        if(sr==m){
            cout << "not found \n";
            return false;
        }
        
        cout << "sr: " << sr << endl;
        
        vector<int> pb(n);
        
        for(int i=0; i<n; i++)
            pb[i] = matrix[sr][i];
        
        for(auto i: pb)
            cout << i << " ";
        cout << endl;
        
        return binary_search(pb.begin(), pb.end(), target);
    
    }
        
};