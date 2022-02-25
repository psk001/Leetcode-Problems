class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> col;
        for(auto i: s)
            col[i]++;
        
        int om=0;
        int res=0;
        
        for(auto i: col){
            if(i.second&1 and i.second>om)
                om=i.second;
            
            else if(i.second%2==0)
                res+=i.second;
        }
        
       // res+=om;
        // cout << "res: " << res << endl;
        int temp=res, flag=0;
        for(auto i: col)
            if(i.second&1 and i.second<=om){
                temp+=i.second-1;
                flag=1;
            }
        
        if(flag)
            temp++;        
        
        return temp;        
    }
};