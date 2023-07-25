class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int left=0,  right=arr.size();
        
        while(left<right){
            int mid= (left+right)/2;
            
            if(arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1])
                return mid;
            
            else if(arr[mid]>arr[mid+1] )
                right=mid;
            
            else if(arr[mid]>arr[mid-1])
                left=mid;
        }
        
        return -1;
    }
};