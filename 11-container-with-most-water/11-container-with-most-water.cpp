class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0, r=h.size()-1;
        int res=INT_MIN;
        while(l<r){
            res=max(res, min(h[l], h[r])*(r-l));
            
            if(h[l]<=h[r])
                l++;
            else
                r--;
        }
        
        return res;
    }
};