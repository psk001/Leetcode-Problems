class Solution {
public:
    string getSmallestString(int n, int k) {
        vector<char> res(n, 'a');
            
        k-=n;
        int i=n-1;
        while(k!=0){
            // cout << "k: " << k << endl;
            if(k>=26){
                res[i]='z';
                i--;
                k-=25;
            }
            else{
                res[i]=static_cast<char>(k+97);
                k=0;
            }
        }
        
        string ans="";
        
        for(auto i: res)
            ans+=i;
        
        cout << "ans: " << ans << endl;
        return ans;
        
    }
};