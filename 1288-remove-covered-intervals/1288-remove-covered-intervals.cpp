class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& i) {
        int n=i.size();
        
        if(n==1)
            return 1;
        
        sort(i.begin(), i.end());
        int res=1;
        int x1=i[0][0], x2=i[0][1];

        for(int p=1; p<n; ++p){
                    
            if(i[p][0]>x1 and i[p][1]>x2){
                res++;                               
            }
            
            if(i[p][1] > x2){
                x1 = i[p][0];
                x2 = i[p][1];
            }            
          }
        
        return res;
        
    }
};