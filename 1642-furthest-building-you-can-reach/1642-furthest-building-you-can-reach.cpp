class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size()-1;
        
        priority_queue<int> p;
        
        for (int i=0; i<n; i++){
            int gap= heights[i+1]-heights[i];
            
            if (gap>0) {
                if (ladders){ 
                    p.push(-gap);
                    ladders--;
                }
                
                else if (!p.empty() && gap>-p.top()){
                    p.push(-gap);
                    bricks+=p.top();
                    p.pop();
                }
                    
                else 
                    bricks-=gap;
                
                if(bricks<0) 
                    return i;
            }
        }
        
        return n;
    }
};
