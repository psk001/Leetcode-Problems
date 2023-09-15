class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m= word1.size(), n= word2.size();
        
        string res="";
        
        int i=0, j=0, f=1;
        
        while(i<m and j<n){
            if(f){
                res+=word1[i];
                i++;
                f=0;
            }else{
                res+=word2[j];
                j++;
                f=1;
            }        
        }
        
        if(i!=m){
            while(i<m){
                res+=word1[i];
                i++;
            }
        }
        
        if(j!=n){
            while(j<n){
                res+=word2[j];
                j++;
            }
        }
        
        return res;
    }
};