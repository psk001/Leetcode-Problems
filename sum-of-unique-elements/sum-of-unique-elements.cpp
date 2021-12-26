class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> r;
        for(int i=0; i<nums.size(); i++)
            r[nums[i]]++;
        
        int res=0;
        for(auto i: r)
            if(i.second==1)
                res+=i.first;
        
        return res;
    }
};