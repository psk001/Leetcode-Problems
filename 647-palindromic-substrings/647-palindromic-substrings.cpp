class Solution {
public:
    int countSubstrings(string s) {
       vector<string> col;
       int res=0;
        
        for(int i=0; i<s.size(); i++)
            for(int j=1; j<=s.size()-i; j++)
                if(isPalindrome(s.substr(i, j)))
                    res++;
        
        return res;
        
    }
    
    bool isPalindrome(string s){
        int i=0, j=s.size()-1;
        
        while(i<=j){
            if(s[i]==s[j])
                i++, j--;
            else 
                return false;
        }
        
        return true;
        
    }
};