class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        unordered_map<int, int> col;
        
        for(int b=1; b<n-2; b++){
            for(int a=0; a<b; a++)
                col[nums[a]+nums[b]]++;
            
            for(int d=b+2; d<n; d++)
                res +=col[nums[d]-nums[b+1]];
        }
        return res;
    }
};