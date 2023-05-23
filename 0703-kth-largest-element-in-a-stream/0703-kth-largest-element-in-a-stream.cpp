class KthLargest {
public:
    priority_queue <int, vector<int>, greater<int>> gq;
    int r;
    
    KthLargest(int k, vector<int>& nums) {
        r=k;
               
        sort(nums.begin(),  nums.end(), greater<int>());
               
        if(nums.size()>0)
            for(int i=0; i<k and i<nums.size(); i++)
                gq.push(nums[i]);
      
    }
    
    int add(int val) {
    
        gq.push(val);
        
        if(gq.size()>r)
            gq.pop();
        
        return gq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */