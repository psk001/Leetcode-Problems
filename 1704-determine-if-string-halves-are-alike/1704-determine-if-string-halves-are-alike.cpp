class Solution {
public:
    bool halvesAreAlike(string s) {
                
        int n= s.size();
        int cnt=0;
        for(int i=0; i<n/2; i++)
            if(
                s[i]=='a' or s[i]=='e' || s[i]=='o' || s[i]=='i' or s[i]=='u' || 
                s[i]=='A' or s[i]=='E' || s[i]=='O' || s[i]=='I' or s[i]=='U'
            )
            cnt++;
        
        for(int i=n/2; i<n; i++)
            if(
                s[i]=='a' or s[i]=='e' || s[i]=='o' || s[i]=='i' or s[i]=='u' || 
                s[i]=='A' or s[i]=='E' || s[i]=='O' || s[i]=='I' or s[i]=='U'
            )            
            cnt--;

        
        return (cnt==0);
    }
};