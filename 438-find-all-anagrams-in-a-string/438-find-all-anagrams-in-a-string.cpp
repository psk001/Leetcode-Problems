class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        
        if(s.size()<p.size()) 
            return res;
        
        vector<int> col(26,0); 
        vector<int> strcol(26,0); 
        
        int m=p.size(), n=s.size();
        int count=0;
        
     
        for(int i=0;i<m;i++) {
            col[p[i]-'a']++;
            strcol[s[i]-'a']++;
        }
        
        
        if(col==strcol) 
            res.push_back(0);
        
        
        for(int i=m;i<n;i++){
            strcol[s[i]-'a']++;

            strcol[s[i-m]-'a']--;
            if(col==strcol) 
                res.push_back(i-m+1); 
   
        }
        return res;
    }
};
