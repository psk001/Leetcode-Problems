class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        for(int i=1; i<n; ){
            
            // cout << "current array: ";
            // for(int i=0; i<n; i++)
            //     cout << nums[i] << " ";
            // cout << endl;
            
          //  cout << "n value before: " << n << endl;
            
            if(nums[i]==nums[i-1] and i+1 < n and nums[i]==nums[i+1]){
                n--;
                for(int j=i+1; j<n; j++)
                    nums[j]=nums[j+1];
            }
            else
                i++;
            
          //  cout << "n value after: " << n << endl;
        }
        
        return n;
    }
};