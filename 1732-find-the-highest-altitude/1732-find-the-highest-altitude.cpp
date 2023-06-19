class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0;
        
        int ca=0;
        
        for(auto i: gain){
            ca+=i;
            res=max(res, ca);
        }
        
        return res;
    }
};