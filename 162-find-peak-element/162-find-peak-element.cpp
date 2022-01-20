class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            if((i==0 || nums[i]>nums[i-1]) && (i==nums.size()-1 || nums[i]>nums[i+1]))
                return i;
        }
        
        return -1;
    }
};



//         int l=0, r=nums[num.size()-1];
        
//         while(l<r){
//             int m=l+(r-l)/2;
            
//             if(nums[m]>nums[m-1] and nums[m]>nums[m+1])
//                 return m;
            
//             else if(nums[m]<nums[])
//         }