class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res(1);
        
        int p=digits[digits.size()-1]+1;
        res.insert(res.begin(), p%10);
        
        int car=(p>=10)? 1: 0 ;
        
        for(int i=digits.size()-2; i>=0; i--){
            p = digits[i]+car;
            res.insert(res.begin(), p%10);
            
            if(p>=10)                
                car=1;
            
            else
                car=0;
        }
        
        if(car!=0)
            res.insert(res.begin(), 1);
        
        res.erase(res.begin()+res.size()-1);
        
        return res;
    }
};