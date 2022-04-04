class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string l1="qwertyuiopQWERTYUIOP", l2="asdfghjklASDFGHJKL", l3="zxcvbnmZXCVBNM";
        map<char, int> col;
        for(auto i: l1)
            col[i]=1;
        
        for(auto i: l2)
            col[i]=2;
        
        for(auto i: l3)
            col[i]=3;
        
        vector<string> res;
        
        for(auto w: words){
            int p=col[w[0]];
            if(ex(col, w, p))
                res.push_back(w);
        }
        
        return res;
    }
    
    bool ex(map<char, int>& col, string w, int p){
        for(auto i: w)
            if(col[i] != p)
                return 0;
        
        return 1;
    }
    
};