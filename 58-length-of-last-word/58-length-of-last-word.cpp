class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.size()-1;
        
        while(s[l]==32)
            l--;
        
        if(l==0)
            return 1;
        
        int f=l;
        
        while(f>=0){
            if(s[f]!=32)
                f--;
            else
                break;
        }
        
        // cout << "final f: " << f << endl;
        return (l-f);
        
    }
};