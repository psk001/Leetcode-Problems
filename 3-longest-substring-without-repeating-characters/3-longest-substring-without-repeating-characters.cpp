class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<2)
            return s.size();
        
        int res=1, start=0, end=1, curr=1;
        
        unordered_map<char, int> col;
        
        col[s[start]]++;
        
        while(end<s.size()){
            col[s[end]]+=1;
            
            if(col[s[end]]==1)         // for unique characters
                curr=end-start+1;
            
            else{                   // for duplicate characters
                col[s[start]] -=1;
                while(col[s[start]] != 1){
                    start++;
                    col[s[start]] -=1;
                }
                start++;
            }
            res=max(res, curr);
            end++;
        }
        
        return res;
        
    }
};