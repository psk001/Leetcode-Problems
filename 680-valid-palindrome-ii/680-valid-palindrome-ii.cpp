class Solution {
public:
    bool validPalindrome(string s) {
        if(s.size()<3)
            return 1;
        
        int l=0, r=s.size()-1;
        
        while(l<r){
            if(s[l] != s[r])            
                return (checkPalindrome(s, l+1, r) || checkPalindrome(s, l, r-1));
               
            l++, r--;
        }
        
        return true;
           
    }
    
    bool checkPalindrome(string s, int l, int r){
        cout << "from check: l: " << l << " r: " << r << endl;
        while(l<r){
            if(s[l]!=s[r])
                return false;
            l++, r--;
        }
        
        return true;
    }
    
};