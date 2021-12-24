class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return bin(nums, target, 0, nums.size());
    }
    
    int bin(vector<int>& a, int t, int l, int h){
        if(l>=h)
            return l;
        int mid = (l+h)/2;
        
        if(a[mid]==t)
            return mid;
        
        else if(a[mid]>t)
            return bin(a, t, l, h-1);
        
        return bin(a, t, l+1, h);
    }
};