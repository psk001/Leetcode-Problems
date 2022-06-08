class Solution {
public:
    int removePalindromeSub(string s) {
        int l=0, r=s.size()-1;
        
        while(l<r){
            if(s[l]!=s[r])
                return 2;
            else
                l++, r--;
        }
        
        return 1;
    }
};