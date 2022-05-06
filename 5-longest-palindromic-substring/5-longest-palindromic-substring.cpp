class Solution {
    int res=INT_MIN;
public:
    string longestPalindrome(string s) {
        if(s.size()<=1)
            return s;
        
        int start=0, end=0;
        int len=INT_MIN;
        for(int i=0; i<s.size(); i++){
            int l1=lena(i, i, s);
            int l2=lena(i, i+1, s);
            int clen=max(l1, l2);
            
            len=max(len, clen);
            
            if(clen>end-start){
                start=i-(clen-1)/2;
                end=i+clen/2;
            }
        }
        
        return s.substr(start, len);
    }
    
    int lena(int lt, int rt, string& s){
        int l=lt, r=rt;
        while(l>=0 and r<s.size() and s[l]==s[r])
            l--, r++;
        
        return r-l-1;
    }
    
//     int lenb(int l, int m, string& s){
//         int r=l, int r=m;
//         int res=2;
//         while(l>=0 and r<s.size()){
//             if(s[l]==s[r]){
//                 l--, r++;
//                 res++;
//             }
//             else
//                 break;
//         }
//         return res;
//     }    
};