class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()<2)
            return;
        int r=nums.size()-1, l=0;
        int c=0;
        vector<int> res(r+1);
    //    cout << "initial c: " << c << endl;
        for(auto i: nums)
            if(i==0 or i==2)
                c++;
        
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]==0){
                res[l]=0;
                l++;              
            }
            
            else if(nums[i]==2){
                res[r]=2;
                r--;                
            }
            
        }
        for(int i=l; i<=r; i++)
            res[i]=1;
        // for(auto i: nums)
        //     cout << i << " ";
        // cout << endl;
        nums=res;
        
        return;
    }
};