class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        
        if(n==1)
            return nums[0];
        
        int cnt=0;
        for(int i=0; i<n; i++){
            if(i<n-1 and nums[i]==nums[i+1]){
                cnt++;
                
                if(cnt>=n/2)
                    return nums[i];
            }
             
        }
        
        return -1;
    }
};