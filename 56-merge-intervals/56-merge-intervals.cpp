class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        if(i.size()==1)
            return i;
        
        vector<vector<int>> res;
        
        sort(i.begin(), i.end());
        
        for(int p=0; p<i.size()-1; p++){
            if(i[p][1]>=i[p+1][0]){
                i[p+1][0]=min(i[p][0], i[p+1][0]);
                i[p+1][1]=max(i[p][1], i[p+1][1]);
            }                     
        }
        map<int, int> col;
        
        for(int p=0; p<i.size(); p++){
            col[i[p][0]]=i[p][1];
        }
        
        for(auto i: col)
            res.push_back({i.first, i.second});
        
        // for (auto k: )
        //     cout << k[0] << " " << k[1] << endl;
               
        return res;
        
    }
};