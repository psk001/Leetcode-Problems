class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        if(c.size()%2!=0)
            return {};
        
        sort(c.begin(), c.end());
        map<int, int> col;
        
        for(auto i: c)
            col[i]++;
                
        vector<int> res;
        for(int i=0; i<c.size(); i++){

            if(col[c[i]]==0)    // already used
                continue;
            
            if(col[c[i]*2]==0)  // number is odd and its half wont exist
                return {}; 
            
            res.push_back(c[i]);
            col[c[i]]--;
            col[c[i]*2]--;
        }
        
        return res;
        
    }
};