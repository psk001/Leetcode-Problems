class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        set<vector<int> > t;
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                for(int k=j+1; k<n; k++)
                    for(int l=k+1; l<n; l++)
                        if(nums[i]+nums[j]+nums[k]==nums[l]){
                            vector<int>p({i, j, k, l});
                            sort(p.begin(), p.end());
                            t.insert(p);
                            // cout << i << " " << j << " " <<  k<< " " << l << endl;
                        }
        res=t.size();
        
        return res;
    }
};