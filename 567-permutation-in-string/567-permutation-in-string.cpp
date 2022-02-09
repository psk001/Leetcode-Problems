class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return 0;
        
        int m=s1.size(), n=s2.size();
        sort(s1.begin(), s1.end());
        
        
        for(int i=0; i<=n-m; i++){
            string temp="";
            for(int j=0; j<m; j++)
                temp+=s2[i+j];
            sort(temp.begin(), temp.end());
            if(temp==s1)
                return 1;
            
        }
        
        return 0;
        
    }
};