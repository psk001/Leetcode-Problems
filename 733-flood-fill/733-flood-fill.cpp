class Solution {
    int nColor,m,n, cColor;
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        nColor=newColor;
        m=image.size(), n=image[0].size();
        vector<vector<int>> res=image; // (m, vector<int>(n, 0))
        cColor=image[sr][sc];
        
        fill(image, res, sr, sc);
        
        return res;
    }
    
    void fill(vector<vector<int>>&image, vector<vector<int>>&res, int cr, int cc){
        // cout << "curr row: " << cr << " curr col: " << cc << endl;
        
        if(cr>=m or cc>=n or cr<0 or cc<0)
            return;
        
        if(res[cr][cc]==nColor or res[cr][cc] != cColor)
            return;
        
        if(image[cr][cc]==cColor){
            res[cr][cc]=nColor;
        }
                
        fill(image, res, cr+1, cc);
        fill(image, res, cr-1, cc);
        fill(image, res, cr, cc+1);
        fill(image, res, cr, cc-1);
    }
};