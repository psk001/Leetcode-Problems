class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0, s=0;
        
        for(auto i: word){
            if(i>=97 and i<=122)
                s++;
            else
                c++;
        }
                
        if(s==word.size() || c==word.size())  // all small or all caps
            return true;     

        if((word[0]>=65 and word[0]<=90) and c==1)
            return true;
        
        return false;
        
    }
};