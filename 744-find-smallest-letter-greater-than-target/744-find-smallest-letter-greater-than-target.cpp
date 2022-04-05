class Solution {
public:
    char nextGreatestLetter(vector<char>& lt, char target) {
        
        if(target<lt[0])
            return lt[0];
        if(target>=lt[lt.size()-1])
            return lt[0];

        
        int l=0, r=lt.size(), res;
        while(l<r){
            int m=l+(r-l)/2;
            if(lt[m]<=target){
                l=m+1;
                res=m;
            }
            else
                r=m;
        }
        
        res=(res==lt.size()-1)?0 : (res+1);
        
        return lt[res];
        
    }
};