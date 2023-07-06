class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n= nums.size();
        vector<int> zdx;
        
        for(int i=0; i<n; i++){
            if(nums[i]==0)
                zdx.push_back(i);
        }
        
        int m= zdx.size();
        
        if(m==0)
            return n-1;
        
        if(m<2 || m==n){
            // cout << "m: " << m << " returning\n";
            return n-m;
        }
        
        int res=INT_MIN;
        
        for(int i=0; i<m; i++){
            if(zdx[i]==0 || i==0){   // handle first idx
                res=max(res, zdx[1]-1);
            }else if(i==m-1){
                res=max(res, n-1-zdx[i-1]-1);
            }else{
                int nz= zdx[i+1];
                int pz= zdx[i-1];
                int cl= nz-1-pz-1;
                
                res= max(res, cl);
            }
            
            // cout << "i: " << i << "res: " << res << endl;
        }
        
        return res;
    }
};