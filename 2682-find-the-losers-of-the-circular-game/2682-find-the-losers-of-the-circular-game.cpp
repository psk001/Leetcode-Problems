class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        
        vector<int> t(n+1, 0);
        
        int r= 1;
        int pos=1;
        t[1]= 1;
        while(true){
            int next= (pos+r*k)%n;
            
            next= (next==0)? n: next;
            
            if(t[next]==1)
                break;
            t[next]=1;
            pos= next;
            r++;
            
        }
        
        vector<int> res;
        
        for(int i=1; i<=n; i++)
            if(t[i]==0)
                res.push_back(i);
        
        return res;
    }
};