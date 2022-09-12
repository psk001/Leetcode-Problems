class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int power) {
        if(t.size()==0)
            return 0;
        
        sort(t.begin(), t.end());
        
        if(t[0]>power)
            return 0;
        
        if(accumulate(t.begin(), t.end(), 0)<=power)
            return t.size();
        
        int cs=0, mxs=0;
        int l=0, r=t.size()-1;
        
        while(l<=r){
            if(power>=t[l]){
                power-=t[l];
                l++;
                cs++;
                mxs=max(mxs, cs);
            }
            else if(cs>0){
                power+=t[r];
                r--;
                cs--;
            }
            else
                break;
        }
        
        
        return mxs;
    }
};