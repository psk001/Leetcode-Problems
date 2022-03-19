class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> col(n+2, 0);
        
        for(auto i: edges)         
            col[i[0]]++, col[i[1]]++;
        
        for(auto i: col)
            cout << i << " ";
        
        for(int i=1; i<=n+1; i++)
            if(col[i]==n)
                return i;
    
        return -1;
    }
    
};