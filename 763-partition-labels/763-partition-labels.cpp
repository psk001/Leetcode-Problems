class Solution {
public:
    vector<int> partitionLabels(string s) {
        if(s.size()==0)
            return {};
        
        if(s.size()==1)
            return {1};
        
        int n=s.size();
        vector<int> first(26, -1);
        
        for(int i=0; i<n; i++)
            if(first[s[i]-'a']==-1)
                first[s[i]-'a']=i;
        
        vector<int> last(26, -1);
        
        for(int i=0; i<n; i++)
            last[s[i]-'a']=i;     
        
        vector<int> res;
        
        int j=0, ck=0;
        for(int start=0; start<n; start++){
            j=max(j, last[s[start]-'a']);
            if(start==j){
                res.push_back(start-ck+1);
                ck=start+1;
            }
        }
        
        return res;
    }
};


// start with a letter check its last occurrence
// atleast this substring will be a partisan
// iterate this partisan
//      add to this the sub strings that will contain 
//      the last occurence of each letter present in 
//      this substring
//  this will give the final partition. 
//             if(l[s[start]-'a']==f[s[start]-'a'])
//                col.push_back()
//






