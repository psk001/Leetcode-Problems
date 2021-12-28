class Solution {
public:
    int firstUniqChar(string s) {
        
        for(int i=0; i<s.size(); i++){
            int flag=1;
            if(s[i]=='.')
                continue;
            for(int j=i+1; j<s.size(); j++){
                if(s[j]=='.')
                    continue;
                if(s[i]==s[j]){
                    s.replace(j, 1, ".");
                    flag=0;
                    //break;
                }
            }
            if(flag){
                return i;
                break;
            }  
            cout << "s: " << s << endl;
        }
                
        return -1;
    }
};