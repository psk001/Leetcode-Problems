class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> col;
        vector<int> res;
        int k=nums.size()/3;
        for(auto i: nums)
            col[i]++;
        
        for(auto i: col)
            if(i.second>k)
                res.push_back(i.first);
        
        return res;
    }
};