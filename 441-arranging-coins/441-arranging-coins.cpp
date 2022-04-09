class Solution {
public:
    int arrangeCoins(int n) {
        long l=0, r=n;
        long k, curr;
        
        while(l<=r){
            k = l+(r-l)/2;
            curr = k*(k+1)/2;
            
            if(curr==n)
                return (int)k;
            
            if(n<curr)
                r=k-1;
            else
                l=k+1;
        }
        
        return (int)r;
    }
    
};