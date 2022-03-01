class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        
        vector<int> dp(nums.size(), 1e8);
        dp[0]=0;
        
        for(int i=0; i<nums.size(); i++){
            // cout << "i: " << i << endl;
            for(int j=1; j<=nums[i] and i+j<nums.size(); j++){
                // cout << "j: " << i+j << endl;
                dp[i+j] = min(dp[i+j], dp[i]+1); 
            }
            cout << endl;
        }
        
        // for(auto k: dp)
        //     cout << k << " ";
        // cout << endl;
        
        return dp[dp.size()-1];
            
    }
};