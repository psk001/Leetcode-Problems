class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res=0;
        
        for(auto i: grid){
            for(auto j: i)
                if(j<0)
                    res++;
        }
        
        return res;
    }
};