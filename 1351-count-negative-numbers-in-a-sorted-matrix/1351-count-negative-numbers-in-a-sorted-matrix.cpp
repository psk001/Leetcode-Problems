class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        int res=0;
        
        int c=0, r=0;
        
        while(r<m){
            if(c<n and grid[r][c]>=0)
                c++;
            else{
                res += n-c;
                c=0;
                r++;
            }
            if(c==n)
                r++, c=0;
            
            // cout << "curr r: " << r << " curr c: " << c << endl;
        }
        
        return res;
    }
};

