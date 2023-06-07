class Solution {
public:
    int minFlips(int a, int b, int c) {
        int res=0;
                
        while(a or b or c){
            int al= a&1, bl= b&1, cl= c&1;
                    
            if ((al | bl) != cl){
                if(cl==0 and al==bl)
                    res+=2;
                else
                    res+=1;
            }
            
            a=a>>1, b=b>>1, c=c>>1;
        }
        
        return res;
    }
};