class Solution {
public:
    string reverseWords(string s) {
        int start=0, end=s.size()-1;
        while(s[start]==32) 
            start++;
        
        while(s[end]==32)
            end--;
        
        string res="", temp="";
        
        while(start<=end){
            if(s[start]==32){
                res=" "+temp+res;
                temp="";
                start++;
                while(s[start]==32)
                    start++;
            }
            else
                temp+=s[start++];
    
        }
        
        res=temp+res;
        
        return res;
    }
};