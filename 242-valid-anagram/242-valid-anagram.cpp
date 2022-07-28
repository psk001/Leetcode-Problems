class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> st(26, 0);
        for(auto i: s)
            st[i-'a']++;
        
        for(auto i: t)
            st[i-'a']--;
        
        for(auto i: st)
            if(i!=0)
                return false;
        
        return true;
    }
        
};