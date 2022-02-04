class Solution {
public:
    string reverseWords(string s) {
        
        string res="", temp="";
        
        for(int i=0; i<s.size(); i++){
            if( s[i]==32 ){
                res += rev(temp);
                if(i != s.size()-1)
                    res += 32;
                temp="";
            }
            
            else{
                temp +=  s[i];
            }
            
        }
        
        res += rev(temp);
        
        return res;
    }
    
    static string rev(string p){
        int l=0, r=p.size()-1;
        
        while(l<=r){
            swap(p[l], p[r]);
            l++, r--;
        }
        return p;
    }
};