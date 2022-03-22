class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int r=0, c=mat[0].size()-1;
        
        while(r<mat.size() and c>=0){
            if(mat[r][c]==target)
                return true;
            
            if(target > mat[r][c])
                r++;
            
            else
                c--;
        }
        
        return false;
    }
};