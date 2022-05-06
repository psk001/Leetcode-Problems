class Solution {

public:
    string removeDuplicates(string s, int k) {
        if(s.size()<k)
            return s;
            
        for(int i=0; i<s.size(); i++){
           
            int r=i;
            char p=s[i];
            int itr=0;

            while(s[r]==p)
                itr++, r++;

            if(itr==k){
                s.erase(i, k);
                i-=k+1;               
            }    
            // cout << "i: " << i << endl;
            // cout << "curr: " << s << endl;

            if(i<-1)
                i=-1;
        }
            
        return s;
    }
    
};