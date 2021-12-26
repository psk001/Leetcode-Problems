class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
 
        sort(points.begin(), points.end(), cmp);
        
        vector< vector<int> > res;
        
        for(int i=0; i<k; i++)
            res.push_back(points[i]);
        
        return res;
    }
    
    static bool cmp(vector<int>&p, vector<int>&q){
        return (p[0]*p[0]+p[1]*p[1]) < (q[0]*q[0]+q[1]*q[1]);
    }
};