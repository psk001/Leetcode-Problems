class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color=image[sr][sc];
        
        if(color != newColor)
            dfs(image, sr, sc, color, newColor);
        
        return image;
    }
    
    void dfs(vector< vector<int> >& img, int sr, int sc, int color, int newColor){
        if(img[sr][sc]==color){
            img[sr][sc]=newColor;
            
            if(sr>0) 
                dfs(img, sr-1, sc, color, newColor);
            
            if(sc>0)
                dfs(img, sr, sc-1, color, newColor);
            
            if(sr+1<img.size())
                dfs(img, sr+1, sc, color, newColor);
            
            if(sc+1<img[0].size())
                dfs(img, sr, sc+1, color, newColor);
            
        }
    }
    
};