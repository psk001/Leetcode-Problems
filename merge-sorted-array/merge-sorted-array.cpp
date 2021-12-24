class Solution {
public:
    void merge(vector<int>& p, int m, vector<int>& q, int n) {
        
        int i=m-1, j=n-1, k=m+n-1;
        
        while(i>=0 and j>=0 ){
            if(p[i]>=q[j]){
                p[k]=p[i];
                i--;
            }
            else{
                p[k]=q[j];
                j--;
            }
            k--;
 
        }
        
        
        while(i>=0 and k>=0){
            p[k]=p[i];
            i--,k--;
        }
        
        while(j>=0 and k>=0){
            p[k]=q[j];
            j--, k--;
        }

    }
};