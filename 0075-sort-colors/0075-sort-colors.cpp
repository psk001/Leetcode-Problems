class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0, t=nums.size()-1;
        int c0=0, c1=0, c2=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)
                // nums[z++]=0;
                c0++;
            
            else if(nums[i]==1)
                // nums[t--]==2;
                c1++;
            
            else if(nums[i]==2)
                // nums[t--]==2;
                c2++;
            
//             for(auto p: nums)
//                 cout << p << " ";
            
//             cout << endl;
        }
        
        for(int i=0; i<c0; i++)
            nums[i]=0;
        
        for(int i=c0; i<c0+c1; i++)
            nums[i]=1;
        
        for(int i=c0+c1; i<c0+c1+c2; i++)
            nums[i]=2;
        
        return;
    }
};