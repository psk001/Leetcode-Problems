class Solution {
public:
    int numberOfSteps(int n) {
        int res=0;
        
        while(n){
            res++;
            if(n&1)
                n-=1;
            else
                n/=2;
        }
        
        return res;
    }
};