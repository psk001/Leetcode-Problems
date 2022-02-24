class Solution {
public:
    string addStrings(string n1, string n2) {
        int m=n1.size(), n=n2.size();
        int i=m-1, j=n-1;
        string res="";
        int sm, cr=0;
        while(i>=0 and j>=0){
            sm = n1[i]-'0'+n2[j]-'0' + cr;
            cr=sm/10;
            res = static_cast<char>(sm%10+48)+res;
            i--, j--;
        }
      // cout << "res: " << res << endl;
        
        while(i>=0){
            sm = n1[i]-'0' + cr;
            cr=sm/10;
            res = static_cast<char>(sm%10+48)+res;
            i--;   
        }
        while(j>=0){
            sm = n2[j]-'0' + cr;
            cr=sm/10;
            res = static_cast<char>(sm%10+48)+res;
            j--;     
        }
        
        if(cr>0)
            res = static_cast<char>(cr+48)+res;
        
        
        return res;
        
    }
};