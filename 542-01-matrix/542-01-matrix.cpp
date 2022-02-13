class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        if(n==0)
            return mat;
        
        vector<vector<int>> res(n, vector<int>(m, INT_MAX));
        queue<pair<int, int> > temp;
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0){
                    res[i][j]=0;
                    temp.push({i, j});
                // else
                //     res[i][j]=getDist(mat, res, i, j);
                }
            }
        }
            
        vector<vector<int> > dir {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
            
        while(not temp.empty()){
            pair<int, int> curr = temp.front();
            temp.pop();
            
            for(int i=0; i<4; i++){
                int r1 = curr.first + dir[i][0];
                int c1 = curr.second + dir[i][1];
                
                if(r1>=0 and c1>=0 and r1<n and c1<m){
                    if(res[r1][c1] > res[curr.first][curr.second]+1){
                        res[r1][c1] = res[curr.first][curr.second]+1;
                        temp.push({r1, c1});
                    }
                }
                
            }
            
        }
        
        return res;      
        
    }
    
    
//     int getDist(vector<vector<int>>& mat, vector<vector<int>>& res, int r, int c){
//         if(r>=mat.size() || c>= mat[0].size() || r<0 || c<0)
//             return 0;
        
//         if(res[r][c]==0)
//             return 0;
        
//         if(res[r][c]>1)
//             return res[r][c];
        
//         int k=getDist(mat, res, r+1, c)+getDist(mat, res, r, c+1)+getDist(mat, res, r-1, c)+getDist(mat, res, r, c-1);
        
//         return 1+k;
        
//     }
    
};