class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> p;
        for(auto i: nums)
            p[i]++;
        
        for(auto i: p)
            if(i.second>1)
                return true;
        return false;
    }
};