class Solution {
public:
    char findTheDifference(string s, string t) {
        string p= s+t;
        
        char y= p[0];
        
        for(int i=1; i<p.size(); i++)
            y^=p[i];
        
        return y;
    }
};