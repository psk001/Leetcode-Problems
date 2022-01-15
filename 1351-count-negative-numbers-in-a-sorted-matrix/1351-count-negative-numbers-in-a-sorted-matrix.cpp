class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res=0,i=0,j=grid[0].size()-1;
        
        while( i<grid.size() ){
            if(grid[i][j]<0){
                res++;
                j--;
            }
            else{
                j=grid[0].size()-1;
                i++;
            }
            
            if(i<grid.size() and j<0){
                j=grid[0].size()-1;
                i++;
            }
            
            cout << "current res: " << res << endl;
            cout << "current i: " << i << endl ;
            cout << "current j: " << i << endl << endl;
        }
        
        return res;
    }
};