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
        
        for(int i=0; i<=n-m; i++){
            vector<int> sv(26);
            for(int j=0; j<m; j++)
                sv[s[i+j]-'a']++;
                
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