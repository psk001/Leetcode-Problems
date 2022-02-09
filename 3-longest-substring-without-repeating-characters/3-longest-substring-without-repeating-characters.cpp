class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        
        int res=INT32_MIN, n=s.size();
        
        for(int i=0; i<n, n-i>res; i++){
            set<char> col;
            int prev=0;
            for(int j=i; j<n; j++){
                col.insert(s[j]);
                int curr= col.size();
                
                if(curr==prev)
                    break;
                
                res=max(res, curr);
                prev=curr;                
            }
        }
        
        return res;
        
    }
};