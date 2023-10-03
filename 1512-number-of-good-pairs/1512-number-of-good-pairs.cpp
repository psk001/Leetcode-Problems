class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> c;
        for(int i=0; i<nums.size(); i++)
            c[nums[i]]++;
        
        int res=0;
        for(auto i: c)
            if(i.second>1)
                res += i.second*(i.second-1)/2;
        
        return res;
    }
};