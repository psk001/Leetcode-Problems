class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(nums.size());
        vector<int> lt(nums.size());
        vector<int> rt(nums.size());
        
        lt[1]=nums[0];
        rt[n-2]=nums[n-1];
        
        for(int i=2; i<nums.size(); i++){
            lt[i]=lt[i-1]*nums[i-1];
        }
                
        
        for(int i=n-3; i>=0; i--){
            rt[i]=rt[i+1]*nums[i+1];
        }     
              
        
        res[0] = rt[0];
        res[n-1] = lt[n-1];
        
        for(int i=1; i<n-1; i++){
            res[i] = lt[i]*rt[i];
        }

        return res;
    }
};