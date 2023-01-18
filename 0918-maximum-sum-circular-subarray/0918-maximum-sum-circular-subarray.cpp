class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        int cmax=0, res1=INT_MIN, cnt=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0)
                cnt++;
            
            cmax += nums[i];
            res1=max(res1, cmax);
            cmax=max(cmax, 0);
        }   
        
        if(cnt==nums.size())
            return *max_element(nums.begin(), nums.end());
        
        int sm=0;
        
        for(auto &i: nums){
            i *= -1;
            sm+=i;
        }


        cmax=0;
        int res2=INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            cmax += nums[i];
            res2=max(res2, cmax);
            cmax=max(cmax, 0);
        }
 
        res2 = -1*(sm-res2);
        
        return max(res1, res2);
    }
    
//     int getMax(vector<int>& nums, int n){
//         int cmax=0, res=INT_MIN;
        
//         for(int i=0; i<n; i++) {
//             cmax += nums[i];
//             res=max(res, cmax);
//             cmax=max(cmax, 0);
//         }
        
//         return res;         
//     }
    
};