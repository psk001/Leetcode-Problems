class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        sort(nums.begin(), nums.end());
        int curr=nums[0], cnt=1;
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==curr){
                cnt++;
            }
            else{
                curr=nums[i];
                cnt=1;
            }
            
            if(cnt>nums.size()/2)
                return curr;
        }
        
        return -1;
    }
};