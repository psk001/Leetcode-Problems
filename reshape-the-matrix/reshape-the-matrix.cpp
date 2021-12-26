class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c != mat.size()*mat[0].size())
            return mat;
        
        int m=mat.size(),  n=mat[0].size();
        
        vector<int> temp(r*c);
        int k=0; 
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
                temp[k++]=mat[i][j];
        }
        
        
        k=0; 
        vector< vector<int> > res;
        
        for(int i=0; i<r; i++){
            vector<int> temp2(c);
            for(int j=0; j<c; j++)
                temp2[j]=temp[k++];
            
            res.push_back(temp2);
        }
        
        return res;
        
        
    }
};