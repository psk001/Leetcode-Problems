class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), xsort);
        int res=INT_MIN;
        for(int i=0; i<points.size()-1; i++)
            res = max(res, points[i][0]-points[i+1][0]);
        
        return res;
    }
    
    static bool xsort(vector<int>& p, vector<int>& q){
        return p[0]>q[0];
    }
};