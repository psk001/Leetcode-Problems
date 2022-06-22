class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        if(s.size()<3) 
            return *s.rbegin();
        
        vector<int> v;
        for(auto i= s.rbegin(); i!= s.rend(); i++)
            v.push_back(*i);
        
        return v[2];
    }
};