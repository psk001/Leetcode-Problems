class NumArray {
public:
    vector<int> col;
    NumArray(vector<int>& nums) {
        col.clear();
        col.push_back(nums[0]);
        
        for(int i=1; i<nums.size(); i++)
            col.push_back(col[i-1]+nums[i]);
        
        for(auto i: col)
            cout << i << " ";
        cout << endl;
        
    }
    
    int sumRange(int left, int right) {

        if(left==0)
            return col[right];
        return col[right]- col[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */