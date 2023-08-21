class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n= s.size();
        
        if(n==1)
            return false;
        
        string temp= "";
        
        for(int i=0; i<n/2; i++){
            temp+=s[i];
            
            int m= n/(i+1);
            
            string p= kp(m, temp);
            
            // cout << "req: " << s << " giv: " << p << endl;
            
            if(p==s)
                return true;
        }
        
        return false;
    }
    
    string kp(int n, string l){
        std::string repeatedString;
      
        for (int i = 0; i < n; ++i) {
            repeatedString += l;
        }

        return repeatedString;
    }
};