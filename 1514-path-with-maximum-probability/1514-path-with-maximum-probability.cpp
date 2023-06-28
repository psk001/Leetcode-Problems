class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        int m= succProb.size();
      
        vector<double> maxProb (n, 0);
        maxProb[start]=1.0;
        
        for(int i=0; i<n-1; i++){
            int update=0;
            
            for(int j=0; j<m; j++){
                int u= edges[j][0];
                int v= edges[j][1];
                
                double currProb= succProb[j];
                
                if(maxProb[u]*currProb > maxProb[v]){
                    maxProb[v]= maxProb[u]*currProb;
                    update=1;
                }
                
                if(maxProb[v]*currProb>maxProb[u]){
                    maxProb[u]= maxProb[v]*currProb;
                    update=1;
                }
                
            }
            
            if(!update)
                break;
                
        }
        
        return maxProb[end];
        
    }
    
    
};