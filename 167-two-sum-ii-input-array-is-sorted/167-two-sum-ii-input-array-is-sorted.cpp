class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        vector<int> res(2);
        int l=0, r=n.size()-1;
        
        while(l<r){
            int s=n[l]+n[r];
            if(s == target){
                res[0]=l+1, res[1]=r+1;
                break;
            }
            
            else if(s > target)
                r--;
            else
                l++;               
        }
        
        return res;
    }
};