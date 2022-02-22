class Solution {
public:
    int titleToNumber(string c) {
        long int res=0;
        for(auto i: c){
            res = res*26 + i-'A'+1;
        }
        
        return res;
    }
};