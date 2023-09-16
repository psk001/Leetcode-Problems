class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        int csum=0;
        
        for(int i=0; i<k; i++)
            csum+=nums[i];
        
        // cout << csum << endl;
        int p=csum;
        
        for(int i=k; i<n; i++){
            p= p-nums[i-k]+nums[i];
            csum= max(csum, p);
            // cout << csum << " " << p << endl;
        }
        
        return (double)csum/k;
    }
};