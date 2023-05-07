class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size(), m= nums2.size();
        
        map<int, int> m1, m2;
        
        vector<vector<int>> res;
        vector<int> t;
        
        for(auto i: nums1){
            m1[i]= 1;
        }
        
        for(auto i: nums2){
            m2[i]= 1;
        }
        
        for(auto i: m1){
            if(m2[i.first]==0)
                t.push_back(i.first);
        }
        
        res.push_back(t);
        
        t.clear();
        
        for(auto i: m2){
            if(m1[i.first]==0)
                t.push_back(i.first);
        }
        
        res.push_back(t);
        
        return res;
        
    }
};