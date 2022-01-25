class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int long i=0; i*i<=c; i++){
            int j=c-i*i;
            if(bs(0, j, j))
                return true;
        }
        
        return false;
    }
    
    bool bs(int long l, int long r, int n){
        if(l>r)
            return false;
        int long mid =l+(r-l)/2;
        if(mid*mid==n)
            return true;
        
        else if(mid*mid<n)
            return bs(mid+1, r, n);
        
        return bs(l, mid-1, n);
    }
};