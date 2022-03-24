class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return {-1, -1};
        
        if(nums.size()==1 and nums[0]==target)
            return {0, 0};
        
        if(nums.size()==1 and nums[0]!=target)
            return {-1, -1};
        
        vector<int> res{-1, -1};
        
        int l=0, r=nums.size()-1;
        
        while(l<=r){
            int mid=l+(r-l)/2;
          
            if(nums[mid]==target){
                if( mid==0 || nums[mid] != nums[mid-1]){
                    res[0]=mid;
                    break;
                }
                else
                    r=mid-1;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;            
        
        }
        
        l=0, r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
          
            if(nums[mid]==target){
                if( mid==nums.size()-1 || nums[mid] != nums[mid+1]){
                    res[1]=mid;
                    break;
                }
                else
                    l=mid+1;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;            
        
        }        
        
        return res;
        
    }
};
