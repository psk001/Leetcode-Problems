class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        
        map<vector<int>, int> mp;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
                if(matrix[i][j]==0)
                    mp[{i, j}]=1;
        }
        
        // for(auto i: mp)
        //     cout << i.first[0] << " " << i.first[1] << endl;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
                if(mp[{i, j}])
                    sz(matrix, i, j);
        }
        
        
        return;
    }
    
    void sz(vector<vector<int>>& matrix, int r, int c){
        int m= matrix.size();
        int n= matrix[0].size();
        
        for(int i=0; i<n; i++){
            matrix[r][i]= 0;
        }
        
        for(int i=0; i<m; i++){
            matrix[i][c]= 0;
        }
        
    }
};