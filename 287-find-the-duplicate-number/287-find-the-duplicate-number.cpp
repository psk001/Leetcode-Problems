class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> col;
        
        for(auto i: nums)
            if(col[i]>0)
                return i;
            else
                col[i]++;
        
        return -1;
    }
};