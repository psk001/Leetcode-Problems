class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        cout << "nums size: " << nums.size() << endl;
        if(k==0 || k==nums.size())
            return;
        
        if(k>nums.size())
            k%=nums.size();
    
        vector<int> temp;
                
        for(int i=nums.size()-k; i<nums.size(); i++){
            temp.push_back(nums[i]);
        }
        
        for(int i=0; i<nums.size()-k; i++)
            temp.push_back(nums[i]);
        
        nums=temp;
        
        return;
    }
};