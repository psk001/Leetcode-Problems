class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return 0;
        
        vector<int> col(26);
        
        for(int i=0; i<s1.size(); i++){
            col[s1[i]-'a']++;
        }
        
        
        for(int i=0; i<=s2.size()-s1.size(); i++){
            vector<int> s(26);
            
            for(int j=0; j<s1.size(); j++)
                s[s2[i+j]-'a']++;
            
            if(issame(col, s))
                return true;
        }
        
        return false;
        
        
    }
    
    bool issame(vector<int> a, vector<int> b){
        for(int i=0; i<26; i++)
            if(a[i]!=b[i])
                return false;
        
        return true;
    }
};