class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int res=0;
        vector<int> diff;
        for(auto i: costs){
            res+=i[0];
            diff.push_back(i[1]-i[0]);
        }
        
        sort(diff.begin(), diff.end());
        
        int n=costs.size()/2;
        
        for(int i=0; i<n; i++)
            res+=diff[i];
        
        return res;
    }    
};