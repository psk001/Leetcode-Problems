class Solution {
public:
    char nextGreatestLetter(vector<char>& lt, char target) {
        
        if(target<lt[0])
            return lt[0];
        if(target>=lt[lt.size()-1])
            return lt[0];
        
        for(auto i: lt)
            if(i>target)
                return i;
        
        return lt[0];
        
//         int l=0, r=lt.size(), res, m;
//         while(l<r){
//         }
        
//         res=(res==lt.size()-1)?0 : (res+1);
        
//         return lt[res];
        
    }
};