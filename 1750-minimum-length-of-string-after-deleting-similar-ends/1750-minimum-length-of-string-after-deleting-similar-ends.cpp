class Solution {
public:
    int minimumLength(string s) {
        
        if(s[0] != s[s.size()-1])
                return s.size();
        
        int start=0, end=s.size()-1;
        
        while(start<end){
            int l=start, r=end;
            
            if(s[l] != s[r])
                break;
            
            char k=s[l];
            
            while(l<r and s[l]==k)
                l++;
            
            k=s[r];
            while(r>-1 and s[r]==k)
                r--;
            
            if(l>r){
                s="";
                return 0;
            }
            
            else
                // s=s.substr(l, r-l+1);
                start=l, end=r;
            
        }
        
        return (end-start+1);
        
    }
};