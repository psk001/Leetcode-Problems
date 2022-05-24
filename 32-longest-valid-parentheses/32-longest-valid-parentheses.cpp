class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size()<2)    
            return 0;
        
        int res=0;
        int l=0, r=0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(')
                l++;
            else 
                r++;
            
            if(l==r)
                res=max(res, 2*l);
            
            else if(r>l)
                r=l=0;
        }
        

        l=0, r=0;
        
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='(')
                l++;
            else 
                r++;
            
            if(l==r)
                res=max(res, 2*l);
            
            else if(l>r)
                r=l=0;
            
        }
                
        
        return res;
    }
};