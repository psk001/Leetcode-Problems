class Solution {
public:
    int minSwaps(string s) {
        int res=0;
        int n=s.size()-1;
        
        int bal=0;
        int j=n-1;
        
        for(int i=0; i<n; i++){
            if(s[i]=='[')
                bal++;
            else
                bal--;
            
            if(bal<0){
                while(i<j and s[i] != '[')
                    j--;
                
                swap(s[i], s[j]);
                res++;
                bal=1;                
            }
            
        }
        
        return res;
    }
};