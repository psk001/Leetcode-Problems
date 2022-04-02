class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=0, r=num;
        while(l<=r){
            long m=l+(r-l)/2;
            if(m*m==num)
                return 1;
            if(m*m>num)
                r=m-1;
            else
                l=m+1;
        }
        
        return 0;
    }
};