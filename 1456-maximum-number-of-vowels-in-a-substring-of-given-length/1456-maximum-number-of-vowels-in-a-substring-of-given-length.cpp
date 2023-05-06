class Solution {
public:
    int maxVowels(string s, int k) {
        int n= s.size();
        
        int cmax=0, res=INT32_MIN;
        
        for(int i=0; i<k; i++)
            if(vw(s[i]))
                cmax++;
        
        // cout << "init cmax: " << cmax << endl;
        res=max(res, cmax);
        for(int i=k; i<n; i++){
            if(vw(s[i-k]) and !vw(s[i]))
                cmax--;
            
            else if(!vw(s[i-k]) and vw(s[i]))
                cmax++;
            
            // cout << "cmax: " << cmax << endl;
            res=max(res, cmax);
        
        }
        
        return res;
        
    }
    
    int vw(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return 1;
        
        return 0;
    }
};