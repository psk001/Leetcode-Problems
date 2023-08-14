class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        
        for(auto t: nums)
            q.push(t);
        
        while(k>1){
            // cout << q.() << " ";
            q.pop();
            k--;
        }
        
        return q.top();
            
    }
};