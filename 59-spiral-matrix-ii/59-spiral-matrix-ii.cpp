class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > res(n, vector<int> (n));
        
        int left=0, top=0, right=n-1, bottom=n-1;
        int curr=1;
        int dir=1;
        
        while(top<=bottom and left<=right){
            
            if(dir==1){
                for(int i=left; i<=right; i++)
                    res[top][i]=curr++;
                top++;
                dir=2;
            }
            
            else if(dir==2){
                for(int i=top; i<=bottom; i++)
                    res[i][right]=curr++;
                right--;
                dir=3;
            }
            
            else if(dir==3){
                for(int i=right; i>=left; i--)
                    res[bottom][i]=curr++;
                bottom--;
                dir=4;
            }
            
            else if(dir==4){
                for(int i=bottom; i>=top; i--)
                    res[i][left]=curr++;
                left++;
                dir=1;
            }
            
        }     
        return res;
        
    }
};