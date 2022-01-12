class Solution {
public:
    string defangIPaddr(string add) {
        auto sr = add.find('.');
        while(sr != string::npos){
            add.replace(sr, 1, "[/]");
             sr=add.find('.');
           // cout << add << endl;
        }
        
        sr = add.find('/');
        while(sr != string::npos){
            add.replace(sr, 1, ".");
             sr=add.find('/');
        }
        
        return add;
    }
};