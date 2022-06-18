class Solution {
public:
    int longestStrChain(vector<string>& words) {
        int res=INT_MIN;
        
        std::sort(words.begin(), words.end(), [](string& first, string& second){
            return first.size() < second.size();
	    });
        
        map<string, int> col;
        
        for(auto word: words){
            int cmax=0;
            for(int i=0; i<word.size(); i++){
                auto sstr= word.substr(0, i)+ word.substr(i+1, word.size()+1);
                cmax= max(cmax, col[sstr]+1);
            }
            col[word]= cmax;
            res= max(res, cmax);
        }
        
        return res;
    }
};
