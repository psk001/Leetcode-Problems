class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> col;
        
        for(auto i: nums)
            col[i]++;
        
        vector<int> res;
        
        for(int i=1; i<=nums.size(); i++){
            if(col[i]==0)
                res.push_back(i);
        }
        
        
        return res;
        
    }
};