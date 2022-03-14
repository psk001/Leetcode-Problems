class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int l=0, h=a.size()-1;
        // nums.insert(nums.begin(), INT_MIN);
        // nums.insert(nums.begin()+nums.size()-1, INT_MIN);
        
        while(l<h){
            int m=(l+h)/2;
            
            if(a[m]>a[m+1])
                h=m;
            
            else
                l=m+1;
        }
        
        return l;
    }
};