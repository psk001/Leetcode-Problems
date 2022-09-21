class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<n-1; i++){
            string p= toStr(n, i);
            string q= p;
            reverse(p.begin(), p.end());
            if(p!=q)
                return false;
                
        }
        
        return true;
    }
    
    string toStr(int n, int base) {
        string convertString = "0123456789ABCDEF";
        if (n < base) 
            return string(1, convertString[n]); 
        else
            return toStr(n/base, base) + convertString[n%base];
    }
};