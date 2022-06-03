class NumMatrix {
    vector<vector<int>> mat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        vector<vector<int>>  tm(m, vector<int>(n+1, 0));
        
        for(int r=0; r<m; r++)
            for(int c=0; c<n; c++)
                tm[r][c+1]=tm[r][c] + matrix[r][c];
        
        mat=tm;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res=0;
    
        for(int row=row1; row<=row2; row++){
            res+=mat[row][col2+1]-mat[row][col1];
            // cout << res << " "; 
        }
        
        // cout << endl;
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */