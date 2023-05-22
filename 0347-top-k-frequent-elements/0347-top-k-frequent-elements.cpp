class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> st;
        
        for(auto i: nums)
            st[i]++;
        
        vector<pair<int, int>> r;
        
        for(auto i: st){
            r.push_back(i);
        }
        
        sort(r.begin(), r.end(), cmp);
        
        st.clear();
        
        vector<int> res;
        
        for(int i=0; i<k; i++)
            res.push_back(r[i].first);
        
        
        return res;
    }
    
    
    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }
};