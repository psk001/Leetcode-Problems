class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()<=1)
            return s;

        for(int i=0; i<s.size(); ){
    
            if(s[i]!=s[i+1])
                i++;
            else{
                s.erase(i, 2);
                i-=1;
            }
            i= (i<0)? 0: i;
            // cout << " i: " << i << " s: " << s << endl;
        }
        
        // cout << "res: " << s << endl;
        
        return s;
                
    }
};
