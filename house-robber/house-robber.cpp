class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
               
        vector<int> res(nums.size(), -1);
        res[0]=nums[0];
        res[1]=max(nums[0], nums[1]);
        
        for(int i=2; i<nums.size(); i++)
            res[i]=max(nums[i]+res[i-2], res[i-1]);
        
        for(auto i: res)
            cout << i << " ";
        
        cout << endl;
        return res[res.size()-1];   
    }
    
};