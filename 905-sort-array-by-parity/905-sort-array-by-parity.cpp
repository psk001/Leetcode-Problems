class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int n=nums.size();
        int p=0, q=n-1;
        
        vector<int> res(n, 0);
        
        for(int i=0; i<n; i++){
            
            if(nums[i]%2==0)
                res[p++]=nums[i];
            else
                res[q--]=nums[i];
    
            
            // for(auto k: res)
            //     cout << k << " ";
            // cout << endl;
        }
        
        return res;
        
    }
};