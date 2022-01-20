class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int l=0, r=a.size()-1;
       
        while(l<=r){
            int m=l+(r-l)/2;
          
            if(a[m]>a[m+1] and a[m]>a[m-1])
                return m;
            
            if(a[m]<a[m+1])
                l=m+1;
            
            else
                r=m-1;
            
           // cout << "curr l: " << l << " curr r: " << r <<  " curr m: " << m << endl;
        }
        
        return 0;

    }
};