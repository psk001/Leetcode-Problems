class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> res;
        
        for(auto i: nums)
            res.push(i);
        
        k--;
        while(k--)
            res.pop();
        
        return res.top();
    }
};