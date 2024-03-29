class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cnt=0;
        
        for(auto i: nums){
            if(i==0)
                return 0;
            
            if(i<0)
                cnt++;
        }
        
        int res= (cnt&1)==1 ? -1 : 1;
        
        return res;
    }
};