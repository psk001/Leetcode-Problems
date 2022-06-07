class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0 and n==0)
            return;
        
        if(n==0)
            return;
        
        if(m==0){
            nums1=nums2;
            return;
        }
        
        int i=0, j=0;
        
        while(i<m+n and j<n){
            if(nums1[i]>nums2[j]){
                int prev=m+n-1;
                while(prev>=i and prev>0){
                    nums1[prev]=nums1[prev-1];
                    prev--;                   
                }
                nums1[i]=nums2[j];
                j++;
            } 
            
            i++;
            // cout << "i: " << i << " j: " << j << endl;
            // for(auto i: nums1)
            //     cout << i << " ";
            // cout << endl;
        }
        
        if(j!=n){
            i-=n-j;
            while(j!=n){
                nums1[i]=nums2[j];
                i++, j++;
            }
        }
        return;
    }
};