class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 and trust.size()==0)
            return 1;
        
        if(trust.size()==0)
            return -1;        
        
        int col[n+1][2];
        memset(col, 0, sizeof(int)*(n+1)*2);
        
        for(auto i: trust){
            col[i[0]][0]++;
            col[i[1]][1]++;
        }
        
        // for(int i=1; i<=n; i++)
        //     cout << i << " " << col[i][0] << " " << col[i][1] << endl;
        
        for(int i=1; i<=n; i++){
            if(col[i][1]==n-1 and col[i][0]==0)
                return i;
        }
        return -1;
    }
};