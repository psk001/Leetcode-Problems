class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax=0, finalMax=INT_MIN;
        
        for(auto i: nums){
            currMax += i;
            if(finalMax<currMax)
                finalMax = currMax;
            
            if(currMax<0)
                currMax=0;
        }
        return finalMax;
    }
};