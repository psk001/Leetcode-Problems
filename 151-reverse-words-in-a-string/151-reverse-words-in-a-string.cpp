class Solution {
public:
    string reverseWords(string s) {
        vector<string> col;
        
        string temp="";
        for(auto i: s){
            if(i==32){
                if(temp.size()==0)
                    continue;
                
                else{
                    col.push_back(temp);
                    temp="";
                }
            }
            
            else
                temp+=i;
        }
        
        if(temp.size()>0)
            col.push_back(temp);
        
        // for(auto i: col)
        //     cout << i <<"/";
        // cout << endl;
        
        int i=0, j=col.size()-1;
        
        while(i<j){
            swap(col[i], col[j]);
            i++, j--;
        }
              
        
        string res="";
        
        for(auto i: col)
            res += " " + i; 
        
        res.erase(res.begin());
        
        return res;
    }
};