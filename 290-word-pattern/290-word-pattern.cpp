class Solution {
public:
    bool wordPattern(string pat, string s) {
        map<char, string> col;
        map<string, char> col2;
        
        vector<string> vs;
        
        stringstream ss(s);
        string st;
        
        while(getline(ss, st, ' '))
            vs.push_back(st);

        if(vs.size() != pat.size())
            return 0;
        
        for(int i=0; i<vs.size(); i++){
            if(col.find(pat[i]) == col.end() and col2.count(vs[i])==0){
                col[pat[i]]=vs[i];
                col2[vs[i]]=pat[i];
            }
            
            else if(col.find(pat[i]) != col.end() and col2.count(vs[i])==0)
                return 0;
            
            else if(col.find(pat[i]) == col.end() and col2.count(vs[i])!=0)
                return 0;
            
            else{
                if(col[pat[i]] != vs[i])
                    return false;
                
                else
                    continue;
            }
        }
        
        return 1;
        
    }
};