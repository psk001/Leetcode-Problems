class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int i=0;
        while(a[i]<a[i+1])
            i++;
        
        return i;

    }
};