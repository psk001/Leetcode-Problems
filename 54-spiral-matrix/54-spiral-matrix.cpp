class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size(), n=mat[0].size();
        vector<int> res;
        
        int top=0, left=0, bottom=m-1, right=n-1;
        int dir=1;
        
        while(top<=bottom and left<=right){
            if(dir==1){
                for(int i=left; i<=right; i++)
                    res.push_back(mat[top][i]);
                top++;
                dir=2;
            }    
            
            else if(dir==2){
                for(int i=top; i<=bottom; i++)
                    res.push_back(mat[i][right]);
                right--;
                dir=3;
            }
            
            else if(dir==3){
                for(int i=right; i>=left; i--)
                    res.push_back(mat[bottom][i]);
                bottom--;
                dir=4;
            }
            
            else if(dir==4){
                for(int i=bottom; i>=top; i--)
                    res.push_back(mat[i][left]);
                left++;
                dir=1;
            }
        }
        
        return res;          
    }
};