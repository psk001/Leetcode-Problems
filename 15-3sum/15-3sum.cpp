class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)
            return {};
        
        sort(nums.begin(), nums.end());
        
        if(nums[0]>0)
            return {};
        
        set<vector<int>> rs;
        // map<int, int> col;
        
        for(int i=0; i<nums.size()-2; i++){
            int req = -1*nums[i];
            int l=i+1, r=nums.size()-1;
            
            while(l<r){
                if(nums[l]+nums[r]==req){
                    rs.insert({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                }

                else if(nums[l]+nums[r]<req)
                    l++;
                else 
                    r--;
            }
        }
        vector<vector<int>> res(rs.begin(), rs.end());
        
        return res;
    }
    
};