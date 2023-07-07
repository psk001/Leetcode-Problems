class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n= nums.size();
        
        int zc= 0, res=0, start=0;
        
        for(int i=0; i<n; i++){
            zc+= (nums[i]==0);
            
            while(zc>1){
                zc-= (nums[start]==0);
                start++;
            }
            
            res= max(res, i-start);
        }
        
        return res;
    }
};