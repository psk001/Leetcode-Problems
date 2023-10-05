class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<int> res;
        int k= nums.size()/3;
        int cnt=1, prev= nums[0];
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=prev){
                if(cnt>k)
                    res.push_back(prev);
                prev= nums[i];
                cnt=1;
            }else{
                cnt++;
            }
        }
        
        if(cnt>k)
            res.push_back(prev);
        
        return res;
    }
};