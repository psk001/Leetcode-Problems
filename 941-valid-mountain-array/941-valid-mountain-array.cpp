class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        int n=a.size();
        
        if(n<3)
            return false;
        
        int i=0;
        
        while(i<n-1 and a[i]<a[i+1] )
            i++;
        
        if(i==n-1 or i==0)
            return false;
        
        while(i<n-1 and a[i]>a[i+1] )
            i++;
        if(i==n-1)
            return true;
        
        return false;
    }
};