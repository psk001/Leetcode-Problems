class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int res=0;
        for(auto i: s){
            int cs = count( i.begin(), i.end(), 32) ;
            res = max(res, cs);
        }
        
        return res+1;
    }
};