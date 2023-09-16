class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<vector<int>, int> m;
        vector<vector<int>> res;
        
        int n= nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i++){
            // cout << i << endl;
            int j= i+1, k= n-1;
            while(j<k){
                // cout << j << " " << k << endl;
                if(nums[i]+nums[j]+nums[k]==0){
                    m[{nums[i], nums[j], nums[k]}]++;;
                    j++, k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else
                    k--;
            }
        }
        
        for(auto i: m)
            res.push_back(i.first);
        
        return res;
    }
};