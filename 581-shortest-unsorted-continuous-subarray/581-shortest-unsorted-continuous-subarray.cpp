class Solution {
public:
    int findUnsortedSubarray(vector<int>& ns) {
        vector<int> nt=ns;
        sort(nt.begin(), nt.end());
        
        int s=-1, e=-1;
        
        int n=nt.size();
        
        for(int i=0; i<n; i++)
            if(nt[i] != ns[i]){
                s=i;
                break;
            }
        
        for(int i=n-1; i>=0; i--)
            if(nt[i] != ns[i]){
                e=i;
                break;
            }
        
        int res=(e==s? 0 : e-s+1);
        
        return res;        
    }
};