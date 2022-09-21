class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        map<int, int>col; 
        int csum=0;
        
        for(int i=0; i<nums.size(); i++){
            if(!(nums[i]&1))
                csum+=nums[i];
        }
        // cout << "csum init: " <<csum << endl;
        int n= queries.size();
            
        vector<int> res(n);
        
        for(int i=0; i<n; i++){
            auto val= queries[i][0];
            auto idx= queries[i][1];
            
            
            if(!(nums[idx]&1)){         // curr idx is even
                if(!(val&1))            // val is even, 
                    csum+=val;          // sum is even, add val to csum                   
                else                    // val is odd
                    csum-=nums[idx];    // sum is odd, remove nums[idx] from csum
            }
            else{                       // curr idx is odd
                if(!(val&1))            // val is even
                    // continue;           // sum remains odd, move on  
                    csum+=0;
                else                    // val is odd
                    csum+=nums[idx]+val;  // sum becomes even, add nums[idx] and val to csum
            }
            
            // cout << "csum: " <<csum << endl;
            nums[idx]+=val;             // update nums
            res[i]= csum;   // update result
            // cout << "nums: " ;
            // for(auto i: nums)
            //     cout << i << " ";
            // cout << endl;
        }
            
        return res;
        
    }
};