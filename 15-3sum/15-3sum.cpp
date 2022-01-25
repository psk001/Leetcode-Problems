class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int> > res;
       
        int n=a.size();
        
        if(n<3)
            return res;
        
        cout << "current size: " << n << endl;
        
        sort(a.begin(), a.end());
        if(a[0]>0)
            return res;
        
        unordered_map<int, int> col;
        
        for(int i = 0 ; i < n ; ++i){    
            col[a[i]] = i;
        }
        
       for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int lk = -1*(a[i]+a[j]);
                
                if(col.count(lk) && col.find(lk)->second > j){
                    vector<int> t{a[i], a[j], lk};
                    res.push_back(t);
                }   
                j = col.find(a[j])->second;
            }  
           i=col.find(a[i])->second;
        }        
        
        
        return res;
    }
};