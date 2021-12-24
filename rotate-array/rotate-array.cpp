class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==nums.size() || k==0)
            return;
        
        if(k>nums.size())
            k %= nums.size();
        
        auto start = nums.begin() + nums.size()-k;
        auto end = nums.end();

        vector<int> result(k);
        nums.erase(start, end);

        copy(start, end, result.begin());
        
        nums.insert(nums.begin(), result.begin(), result.end());

        return;
    }
};