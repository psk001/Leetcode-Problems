class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        int inc=0, exc=0;
        
        vector<int> count(10000, 0);
        for(auto i: nums)
            count[i]++;
        
        for(int i=0; i<10000; i++){
            int tk=exc+count[i]*i;
            int nt=max(inc, exc);
            
            inc=tk;
            exc=nt;
        }
        
        return max(inc, exc);
        
    }
};