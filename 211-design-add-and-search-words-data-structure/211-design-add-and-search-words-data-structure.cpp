class WordDictionary {
    vector<WordDictionary*> child;
    bool isEnd;
    
public:
    WordDictionary():isEnd(false) {
        child = vector<WordDictionary* > (26, nullptr);        
    }
    
    void addWord(string word) {
        WordDictionary* temp=this;
        for(auto c: word){
            if(temp->child[c-'a']==nullptr)
                temp->child[c-'a']=new WordDictionary();
            temp=temp->child[c-'a'];
        }
        temp->isEnd=true;
        
        return;
    }
    
    bool search(string word) {
        WordDictionary* temp=this;
        for(int i=0; i<word.size(); i++){
            char c=word[i];
            if(c=='.'){
                for(auto ch: temp->child)
                    if(ch and ch->search(word.substr(i+1)))
                        return true;
                return false;
            }
            if(temp->child[c-'a']==nullptr)
                return false;
            
            temp=temp->child[c-'a'];
        }
        
        return (temp and temp->isEnd);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */