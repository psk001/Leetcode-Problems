class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        return ksum(nums, target, 0, 4);
    }
    
    vector<vector<int>> twoSum(vector<int>& nums, int target, int start){
        vector<vector<int>> res;
        
        int l=start, r=nums.size()-1;
        
        while(l<r){
            int csum=nums[l]+nums[r];
            if(csum<target || (l>start and nums[l]==nums[l-1] ))
                ++l;
            
            else if(csum>target || (r<nums.size()-1 and nums[r]==nums[r+1]))
                --r;
            
            else
                res.push_back( { nums[l++], nums[r--] } );
        }
        
        return res;
    }
    
    vector<vector<int>> ksum(vector<int>& nums, int t, int start, int k){
        vector<vector<int>> res;
        
        if(start==nums.size())
            return res;
        
        int avgVal=t/k;
        
        if(nums[start]>avgVal || avgVal>nums.back())
            return res;
        
        
        if(k==2)
            return twoSum(nums, t, start);
        
        
        for(int i=start; i<nums.size(); ++i){
            if(i==start || nums[i-1] != nums[i]){
                for(vector<int>& subset: ksum(nums, static_cast<long>(t) - nums[i], i+1, k-1)){
                    res.push_back({nums[i]});
                    res.back().insert(end(res.back()), begin(subset), end(subset));
                }
            }
                
        }
        
        return res;
           
    }
    
};