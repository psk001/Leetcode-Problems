class Solution {
public:
    vector<int> partitionLabels(string s) {
        if(s.size()==1)
            return {1};
        
        vector<int> fo(26, -1);
        vector<int> lo(26);
        
        for(int i=0; i<s.size(); i++){
            if(fo[s[i]-'a']==-1)
                fo[s[i]-'a']=i;
            
            lo[s[i]-'a']=i;
        }
        
//         for(auto i: s){
//             cout << i << "  " ;
//             cout << "first: " << fo[i-'a'] ;
//             cout << "  last: " << lo[i-'a'] << endl;
//         }
        
        vector<int> res;
        
        for(int i=0; i<s.size(); i++){
            int start=fo[s[i]-'a'];
            int end=lo[s[i]-'a'];
            
            cout << "curr start: " << start << endl;
            for(int j=start; j<end; j++){
                end=max(end, lo[s[j]-'a']);
                // cout << "curr end: " << end << endl;
            }
            
            res.push_back(end-start+1);
            i=end;            
        }
        
    
        return res;
        
    }
};