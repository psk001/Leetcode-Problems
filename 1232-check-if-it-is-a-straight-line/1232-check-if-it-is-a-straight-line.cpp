class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cd) {
        
        sort(cd.begin(), cd.end(), cmp);
                
        int n= cd.size();
        
        if(cd[0][0]==cd[n-1][0]){
            
            int px= cd[0][0];
           
            for(auto p: cd)
                if(p[0]!=px)
                    return false;
            
            return true;
        }
        
        double m= (double) (cd[n-1][1]-cd[0][1])/ (cd[n-1][0]-cd[0][0]);
        
//         if(m==0) {
//             int py= cd[0][1];
            
//             for(auto p: cd){
//                 cout << p[1] << " ";
//                 if(p[1]!=py){
//                     cout <<"returning from 30";
//                     return false;   
//                 }
//             }
//             return true;
//         }
        
        for(int i=1; i<n; i++){
            double cm= (double) (cd[i][1]-cd[i-1][1])/ (cd[i][0]-cd[i-1][0]);
            
            if(cm!=m){
                cout <<"returning from 40";
                return false;   
            }
        }
        
        
        return true;
        
    }
    
    bool static cmp(vector<int>& a, vector<int>& b){
        return a[0]<b[0];
    }
};