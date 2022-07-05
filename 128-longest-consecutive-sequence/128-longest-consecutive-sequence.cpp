class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        
        if(n<2)
            return n;
        
        sort(nums.begin(), nums.end());
        
        map<int, int> col;
        for(auto i: nums)
            col[i]++;
        
        nums.clear();
            
        for(auto i: col)
            nums.push_back(i.first);
        
        
        int res=0, curr=nums[0], temp=0;
        
        for(int i=0; i<n; i++){
            // cout << "nums[" << i << "]: " << nums[i] << " curr: " << curr ;
       
            if(nums[i]==curr){
                temp++;
                curr++;
            }
            else{
                res=max(res, temp);
                temp=1;
                curr=nums[i]+1;
            }
            // cout << "  temp: " << temp << endl;
        }
        
        res=max(res, temp);
        return res;
    }
};