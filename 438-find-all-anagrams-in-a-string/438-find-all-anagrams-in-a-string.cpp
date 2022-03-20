class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size())
            return {};
        
        vector<int> res;
        vector<int> pv(26);
        
        for(auto i: p)
            pv[i-'a']++;
        
        int n=s.size(), m=p.size();
        vector<int> sv(26);

        for(int i=0; i<m; i++){
            sv[s[i]-'a']++;
        }
        
        if(eq(sv, pv))
            res.push_back(0);   
        
        for(int i=1; i<=n-m; i++){
            sv[s[i-1]-'a']--;
            sv[s[i+m-1]-'a']++;
                
            if(eq(sv, pv))
                res.push_back(i);
        }
        
        return res;
        
    }
    
    bool eq(vector<int>&a, vector<int>&b){
        for(int i=0; i<26; i++)
            if(a[i]!=b[i])
                return false;
        
        return true;
    }
    
};