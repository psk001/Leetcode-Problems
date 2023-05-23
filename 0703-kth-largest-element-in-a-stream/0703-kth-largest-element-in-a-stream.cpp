class KthLargest {
public:
    priority_queue <int, vector<int>, greater<int>> gq;
    int r;
    
    KthLargest(int k, vector<int>& nums) {
        r=k;
        // cout << 1 << endl;
        
        sort(nums.begin(),  nums.end(), greater<int>());
        // cout << 2 << endl;                    
        
        if(nums.size()>0)
            for(int i=0; i<k and i<nums.size(); i++)
                gq.push(nums[i]);
        // cout << 3 << endl;
    }
    
    int add(int val) {
        // cout << 4 << endl;
        gq.push(val);
        
        // cout << 5 << endl;
        if(gq.size()>r)
            gq.pop();
        
        // cout << 6 << endl;
        return gq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */