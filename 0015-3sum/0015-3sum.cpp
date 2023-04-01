class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        vector<vector<int>> res;
        int n= nums.size()-1;
        
        sort(nums.begin(), nums.end());
        
        // escaping duplicates from back
        // while(n>0 and nums[n]==nums[n-1])
            // n--;
        
        // escaping duplicates from front
        int p=0;
        // while( p<n-1 and nums[p]==nums[p+1])
            // p++;
        
        
        for(int i=p; i<n; i++){
            // cout << "i: " << i << endl;
            int j=i+1, k=n;
            
//             while(j<n-1 and nums[j]==nums[j+1] )
//                 j++;
            
            // cout << "j: " << j;
            
//             while( k>0 and nums[k]==nums[k-1])
//                 k--;
            
            // cout << " k: " << k << endl;
            
            while(j<k){
                int sum= nums[i]+nums[j]+nums[k];
                // cout << "sum: " << sum;
                if(sum>0)
                    k--;
            
                else if(sum<0)
                    j++;
                
                else{
                    result.insert({nums[i], nums[j], nums[k]});
                    j++,k--;
                }
                
                // cout << "\nInside while :  i: " <<  i << " j: " << j << " k: " << k << endl;
            }
        }
        
        for(auto i: result)
            res.push_back(i);
        
        return res;
    }
};