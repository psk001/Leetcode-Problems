class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int r=nums.size();
       // sort(nums.begin(), nums.end());
        vector<int> p(2);
        
        for(int i=0; i<r; i++){
            for(int j=i+1; j<r; j++){
                if(nums[i]+nums[j]==target){
                    p[0]=i, p[1]=j;
                    break;
                }
            }
        }
         return p;
    }
};