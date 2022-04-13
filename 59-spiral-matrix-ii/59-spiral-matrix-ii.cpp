class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        
        int top=0, left=0, right=n-1, bottom=n-1;
        int lr=1, tb=0, rl=0, bt=0;
        int k=1;
        
        while(top<=bottom and left<=right){
            if(lr){
                for(int i=left; i<=right; i++){
                    res[top][i]=k;
                    k++;
                }
                lr=0, tb=1;
                top++;
            }
        
            if(tb){
            
                for(int i=top; i<=bottom; i++){
                    res[i][right]=k;
                    k++;
                }
                tb=0, rl=1;
                right--;                
            }
            
            if(rl){
                for(int i=right; i>=left; i--){
                    res[bottom][i]=k;
                    k++;
                }
                rl=0, bt=1;
                bottom--;                
            }
            if(bt){
            
                for(int i=bottom; i>=top; i--){
                    res[i][left]=k;
                    k++;
                }
                bt=0, lr=1;
                left++;                
            }
        }
        
        return res;
    }
};