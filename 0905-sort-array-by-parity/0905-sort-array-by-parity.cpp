class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int c=0;
        
        for(int i=0; i<nums.size(); i++)
            c+= !(nums[i]&1);
        
        // cout << c << endl;
        
        int l=0;
               
        for(int i=0; i<nums.size(); i++){
            if(!(nums[i]&1)){
                swap(nums[i], nums[l]);
                l++;
            }

            // cout << l << " " <<  c << endl;
            if(l==c)
                break;
        }
        
        return nums;
    }
};