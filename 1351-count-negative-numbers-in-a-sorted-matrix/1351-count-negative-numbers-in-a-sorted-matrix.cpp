class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        int res=0;
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(grid[i][j]<0){
                    res += n-j;
                    break;
                }
            }
        return res;
    }
};

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& mat, int target) {
//         int r=0, c=mat[0].size()-1;
        
//         while(r<mat.size() and c>=0){
//             if(mat[r][c]==target)
//                 return true;
            
//             if(target > mat[r][c])
//                 r++;
            
//             else
//                 c--;
//         }
        
//         return false;
//     }
// };