class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int, int> col;
        
        for(int i=0; i<n; i++)
            col[nums[i]]=i;
        
        vector<int> p(2);
        
        for(int i=0; i<n; i++)
            if(col[target-nums[i]] > 0 and col[target-nums[i]] != i){
                p[0]=i, p[1]=col[target-nums[i]];
                break;
            }

         return p;
    }
};