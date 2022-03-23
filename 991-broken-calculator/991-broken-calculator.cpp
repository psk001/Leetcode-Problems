class Solution {
public:
    int brokenCalc(int startValue, int target) {
        if(target<=startValue)
            return abs(target-startValue);
        
        int res=0;
        
        while(target>startValue){
            if(target & 1)
                target+=1;
            else
                target/=2;
            
            res++;
        }
        
        res += startValue-target;
        
        return res;
        
    }
};