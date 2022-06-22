class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        map<int, int> c;
        vector<int> t=nums;
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        for(int i=0; i<k; i++)
            c[nums[i]]++;
        
        vector<int> res;
        
        for(auto i: t){
            if(c[i]>0){
                res.push_back(i);
                c[i]--;
            }
        }
        
        return res;
    }
};