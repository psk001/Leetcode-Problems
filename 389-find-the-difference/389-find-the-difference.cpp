class Solution {
public:
    char findTheDifference(string s, string t) {
        string q=s+t;
        
        int p = (int)q[0];
        
        for(int i=1; i<q.size(); i++)
            p ^= (int)q[i];
        
        return (char)p;
    }
};