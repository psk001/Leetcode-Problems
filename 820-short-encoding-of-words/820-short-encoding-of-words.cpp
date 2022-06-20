class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> s;
        
        for(auto word: words)
            s.insert(word);
        
        for(auto word: words){
            for(int k=1; k<word.length(); k++)
                s.erase(word.substr(k));
        }
        
        int res=0;
        for(auto word: s)
            res+= word.size()+1;
        
        
        return res;
    }
};