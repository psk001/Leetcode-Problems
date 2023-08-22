class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;
        
        int a=0, b=1, res;
        
        for(int i=2; i<=n; i++){
            res=a+b;
            a=b;
            b=res;
        }
            
        return res;
    }
};