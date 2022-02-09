class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map<pair<int, int>, int> col;
        
        for(int i=0; i<nums.size(); i++){
            if(binary_search(nums.begin()+i+1, nums.end(), nums[i]+k))
                col[{nums[i], nums[i]+k}]++;
        }
        
        return col.size();
        
    }
};