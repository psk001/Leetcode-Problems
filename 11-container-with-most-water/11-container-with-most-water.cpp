// brute force solution

class Solution {
public:
    int maxArea(vector<int>& height) {
  
        int res=-1;
        int i=0, j=height.size()-1;
        
        while(i<j){
           // int curCap = min(height[i], height[j])*(j-i);
            res=max(res, min(height[i], height[j])*(j-i));
            
            if(height[j]<height[i])
                j--;
            
            else
                i++;
        }
        
        return res;        
    }
};

    