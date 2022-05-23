class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        
        int csum=0, rmax=INT_MIN;
        
        for(int i=0; i<n; i++){
            csum += nums[i];
            rmax=max(rmax, csum);
            
            if(csum<0)
                csum=0;
        }
        
        csum=0;
        int rmin=INT_MAX;
        
        for(int i=0; i<n; i++){
            csum += nums[i];
            rmin=min(rmin, csum);
            
            if(csum>0)
                csum=0;
        }        
        
        return max(abs(rmax), abs(rmin));
        
    }
};