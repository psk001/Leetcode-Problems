class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> col;
        int n=INT_MIN;
        
        for(auto i: edges){
            col[i[0]]++, col[i[1]]++;
            n=max(n, max(i[0], i[1]));
        }
        
        for(auto i: col)
            if(i.second==n-1)
                return i.first;
    
        return -1;
    }
    
};