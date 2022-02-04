class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int cnt=0, res=0;
        unordered_map<int, int> col;
        
        col[0]=-1;
        
        for(int i=0; i<nums.size(); i++){
            cnt+= (nums[i]==1 ? 1 : -1);
            if(col.find(cnt) != col.end())
                res=max(res, i-col[cnt]);
            else
                col[cnt]=i;
        }
        
        return res;
    }
};