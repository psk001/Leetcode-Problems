class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> col;
        for(auto i: s)
            col[i]++;
        
        int res=0;
        
        for(auto i: col){
            res += i.second/2 * 2;
            
            if(res%2==0 and i.second%2==1)
                res++;
        }
              
        
        return res;        
    }
};