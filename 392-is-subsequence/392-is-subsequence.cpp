class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.size()<s.size())
            return 0;
        
        int i=0, j=0;
        
        while(i<t.size() and j<s.size()){
            if(t[i]==s[j]){
                i++, j++;
            }
            
            else
                i++;
        }
        
        return(j==s.size());
        
    }
};