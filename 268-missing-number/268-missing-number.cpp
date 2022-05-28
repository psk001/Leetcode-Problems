class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=nums[0], n=nums[0], zf=(nums[0]==0);  
        
        for(int i=1; i<nums.size(); i++){
            res = res^nums[i];
            n=max(n, nums[i]);
            if (nums[i]==0)
                zf=1;
        }
    
        // cout << "n: " << n << endl;
        
        for(int i=0; i<=n; i++)
            res = res^i;
        
        if(zf and res==0){
            // cout << "res is 0 and zero is present\n";
            res=n+1;
        }
        else if (res==0 and zf==0){
            // cout << "res is 0 and zero is absent\n";
            res=0;
        }
        
        // res = (res==0) ? n+1 : res;
        
        return res;
    }
    
};