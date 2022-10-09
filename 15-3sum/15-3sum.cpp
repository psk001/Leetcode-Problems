class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]>0)
            return {};
        
        int n= nums.size();
                
        vector<vector<int>> res;
        
        for(int i=0; i<n; i++){
            if(nums[i]>0 or i==n-1)
                break;
            
           if(i>0 and nums[i]==nums[i-1])
               continue;
            
            int l= i+1, r= n-1;
            
            while(l<r){
                int val= nums[l]+nums[i]+nums[r];
                
                if(val==0){
                    res.push_back({nums[l], nums[i], nums[r]});
                
                    int clow= nums[l], chigh= nums[r];
                
                    while(l<n and clow==nums[l])
                        l++;
                
                    while(r>0 and chigh==nums[r])
                        r--;                    
                }
                
                else if (val<0)
                    l++;
                else 
                    r--;
                
            }
                
        }
                
        return res;
    }
};