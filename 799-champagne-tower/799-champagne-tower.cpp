class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        if(poured==0)
            return 0;
      
        double res[102][102] = {0.0};
        
        res[0][0]=(double)poured;
        
        for(int i=0; i<=query_row; i++){
            
            for(int j=0; j<=i; j++){
                if(res[i][j]>=1){
                    res[i+1][j] += (res[i][j]-1)/2.0;
                    res[i+1][j+1] += (res[i][j]-1)/2.0;
                    res[i][j]=1;
                }
            }
        }
               
        return min(1.00000, res[query_row][query_glass]);
    }  
    
};