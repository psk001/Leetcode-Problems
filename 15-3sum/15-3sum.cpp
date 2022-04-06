class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)
            return {};
        
        sort(nums.begin(), nums.end());
        
        if(nums[0]>0)
            return {};
        
        vector<vector<int>> res;

        
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]>0)
                break;
            
            if(i>0 and nums[i]==nums[i-1])
                continue;
            
            int l=i+1, r=nums.size()-1;
            
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                
                if(sum<0)
                    l++;
                else if(sum>0)
                    r--;
                
                else{
                    res.push_back({nums[i], nums[l], nums[r]});
                    
                    int clow=nums[l], chigh=nums[r];
                    
                    while(l<r and clow==nums[l])
                        l++;
                    
                    while(l<r and chigh==nums[r])
                        r--;
                }
            }
        }
        
        
        return res;
    }
    
};