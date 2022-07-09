class Solution {    
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq; 
        vector<int> dp(nums.size());
        
        for(int i=nums.size()-1; i>=0; i--){
            while(pq.size() and pq.top().second > i+k)
                pq.pop();
            
            dp[i]= nums[i]+(pq.size()>0 ? pq.top().first : 0);
            pq.push({dp[i], i});
        }
     
        return dp[0];
    }

};