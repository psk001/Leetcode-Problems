class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s1=0, s2=s1+n;
        
        vector<int> res;
        int i=0;
        while(i<2*n){
            if(i%2==0){
                res.push_back(nums[s1]);
                s1++;
            }
            else{
                res.push_back(nums[s2]);
                s2++;
            }
            i++;
        }
        
        return res;
    }
};