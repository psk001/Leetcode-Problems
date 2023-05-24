class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long res=INT_MIN;
        int n= nums1.size();
        
        vector<pair<int, int>> st;
        
        for(int i=0; i<n; i++)
            st.push_back({nums1[i], nums2[i]});
        
        sort(st.begin(), st.end(), comp);
        
        priority_queue<int, vector<int>, greater<int> > pq;
        
        long long csum=0;
        
        for(auto pair: st){
            csum+=pair.first;
            pq.push(pair.first);
            
            if(pq.size()==k){
                res= max(res, csum*(pair.second));
                csum-=pq.top();
                
                pq.pop();
            }
        }
        
        
        return res;
        
    }
    
    static bool comp(pair<int, int> a, pair<int, int> b){
        return a.second>b.second;
    }
};
