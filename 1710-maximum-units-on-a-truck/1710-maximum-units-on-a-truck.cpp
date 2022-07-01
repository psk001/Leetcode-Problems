class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truckSize) {
        int res=0;
        
        sort(box.begin(), box.end(), fn);
        
        int i=0;  // 0: number, 1: units
        while(truckSize>0 and i<box.size()){
            int cap= min(truckSize, box[i][0]);
            res+= cap*box[i][1];
            truckSize-=cap;
            i++;
        }
        
        return res;
    }
    
    static bool fn(vector<int>&a, vector<int>&b){
        return a[1]>b[1];
    }
};