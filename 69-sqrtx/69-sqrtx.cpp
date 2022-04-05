class Solution {
public:
    int mySqrt(int x) {
        long l=0, r=x, res;
      
        while(l<=r){
            long m= l+(r-l)/2;
            if(m*m==x)
                return (m);
            
            if(m*m<x){
                l=m+1;
                res=m;
            }
            else
                r=m-1;
            cout << "l: " << l << " r: " << r << " m: " << m << endl; 
        }
        
        return res;
    }
};