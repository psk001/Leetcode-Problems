class Solution {
public:
    int maximum69Number (int num) {
        string p= to_string(num);
        
        for(int i=0; i<p.size(); i++)
            if(p[i]=='6'){
                p[i]='9';
                break;
            }
        
        return stoi(p);
    }
};