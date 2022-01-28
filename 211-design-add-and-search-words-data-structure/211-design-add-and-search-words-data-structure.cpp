class WordDictionary {
    unordered_map<int, vector<string> > col;
    bool isEqual(string s1, string s2){
        for(int i=0; i<s1.size(); i++){
            if(s1[i]=='.')
                continue;
            else if(s1[i]!=s2[i])
                return false;               
        }
        return true;
    };
    
public:
    WordDictionary(){        
    }
    
    void addWord(string word) {
        col[word.size()].push_back(word);        
        return;
    }
    
    bool search(string word) {
        int k=word.size();
        bool res=false;
        for(auto &&i: col[k]){
            if(isEqual(word, i))
                return true;
        }
        
        return res;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */