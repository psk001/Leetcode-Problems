class KthLargest {
    int p;
    priority_queue<int> col;
    
public:
    KthLargest(int k, vector<int>& nums) {
        p=k;
        
        for(auto i: nums)
            col.push(-1*i);
        
        while(col.size()>k)
            col.pop();
        
    }
    
    int add(int val) {
        col.push(-1*val);

        if(col.size()>p)
            col.pop();

        return (-1*col.top());
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */