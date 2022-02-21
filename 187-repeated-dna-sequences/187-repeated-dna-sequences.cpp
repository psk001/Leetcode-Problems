class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size()<=10)
            return {};
        
       // cout << "sring size: " << s.size() << endl;
        
        map<string, pair<int, int> > col;
        
        vector<string> res;
        
        for(int i=0; i<=s.size()-10; i++){
            string temp="";
            for(int j=0; j<10; j++)
                temp+=s[i+j];
            
            col[temp].first++;
            
            if(col[temp].second ==1 )
                continue;
            
            else if(col[temp].first>1){
                res.push_back(temp);
                col[temp].second=1;
            }
                        
        }
            
        return res;
    }
};

        // string temp="";
        
        // for(int i=0; i<10; i++)
        //     temp+=s[i];
        
        // col[temp]++;