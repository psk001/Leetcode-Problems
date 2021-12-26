class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
 
        
        vector< pair< int, vector<int> > > temp;
        
        for(auto i: points){
            int len = i[0]*i[0] + i[1]*i[1];
            temp.push_back({len, i});
        }
        
        sort(temp.begin(), temp.end());
        
        for(auto i: temp){
            for(auto j : i.second){
                cout << j << " ";
                
                cout << i.first << endl;
            }
        }
            
            
        
        
        vector< vector<int> > res;
            
        int n=temp.size();
        
        for(int i=0; i<k; i++){
            res.push_back(temp[i].second);
        }
        
        return res;
    }
};