class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int r=nums.size()-1;
        
        for(int i=0; i<=r; ){
            if(nums[i]==0){
                for(int j=i; j<r; j++)
                    nums[j]=nums[j+1];
                
                nums[r]=0;
                r--;
            }
            else
                i++;
            
        }
    }
};