class Solution {
public:
    int findMin(vector<int>& nums) {
//         if(nums.size()==1)
//             return nums[0];
//         int n=nums.size()-1;
        
//         int l=0, r=nums.size()-1;
        
//         while(l<=r){
//             int m=(l+r)/2;
            
//             if(m==n and nums[m]<nums[m-1])
//                 return nums[m];
            
//             if(m!=0 and nums[m]<nums[m-1] and nums[m]<nums[m+1])
//                 return nums[m];
            
            
            
//         }
        
        sort(nums.begin(), nums.end());
        return nums[0];
        
    }
};