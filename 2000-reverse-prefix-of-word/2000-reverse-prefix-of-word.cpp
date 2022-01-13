class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto sr=word.find(ch);
        if(sr==string::npos)
            return word;
        
        int i=0, j=sr;
        while(i<j){
            swap(word[i], word[j]);
            i++, j--;
        }
        return word;
    }
};