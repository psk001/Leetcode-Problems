class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        
        for(int i=0; i<nums.size(); i++){
            int rem= target-nums[i];
                
            if(um.count(rem) !=0)
                return {i, um[rem]};
            
            um[nums[i]]= i;
        }

        return {};
    }
};