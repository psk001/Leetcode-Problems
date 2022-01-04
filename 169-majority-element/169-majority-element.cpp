class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int, int> col;
        
        for(auto i: nums)
            col[i]++;
        
        int res;
        
        for(auto i: col){
            if(i.second > floor(nums.size()/2))
                res = i.first;
        }
        
        return res;
    }
};