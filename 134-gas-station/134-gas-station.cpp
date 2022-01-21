class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0, totalCost=0;
        
        for(int i=0; i<gas.size(); i++){
            totalGas += gas[i];
            totalCost += cost[i];
        }
        
        if(totalGas<totalCost)
            return -1;
        
        int currGas=0, res=0;
        
        for(int i=0; i<gas.size(); i++){
            if(currGas<0){
                currGas=0;
                res=i;
            }
            
            currGas += gas[i]-cost[i];
        }
        
        
        return res;
        
    }
};