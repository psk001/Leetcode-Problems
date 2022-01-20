class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i;
        for(i=0; i<arr.size()-1; i++)
            if(arr[i+1]>arr[i])
                continue;
            else
                break;
        
        for(int k=i; k<arr.size()-1; k++){
            if(arr[k]>arr[k+1])
                continue;
        }
        
        return i;
    }
};