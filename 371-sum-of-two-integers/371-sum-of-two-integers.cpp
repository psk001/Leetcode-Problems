class Solution {
public:
    int getSum(int a, int b) {
        if(a==b)
            return 2*b;
        
        while(b){
            unsigned cr=a&b;
            a^=b;
            b=cr<<1;
        }
        
        return a;
        
    }
};