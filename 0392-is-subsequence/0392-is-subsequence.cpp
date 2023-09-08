class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m= s.size(), n= t.size();
        int i=0, j=0;
        
        while(i<m and j<n){
            if(s[i]==t[j])
                i++, j++;
            
            else
                j++;
            
            // cout << i << " " << j << endl;
        }
        
        // cout << i << " " << j << endl;
        return i==m;
    }
};