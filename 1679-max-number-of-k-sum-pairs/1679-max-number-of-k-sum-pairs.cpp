class Solution {
public:
    int maxOperations(vector<int>& nm, int k) {
        int res=0;
        sort(nm.begin(), nm.end());
        vector<int> p = nm;
        
        int l=0, r=nm.size()-1;
        
        while(l<r){
            int cr=nm[l]+nm[r];
            if(cr==k){
                res++;
                l++;
                r--;
            }
            else if(cr<k)
                l++;
            else
                r--;
        }
        
        return res;
    }
};