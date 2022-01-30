class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int p1=getPoints(nums, 0, nums.size()-1, 1);
        return p1>=0;    
    }
    
    int getPoints(vector<int>& nums, int start, int end, int turn){
        if(start==end)
            return turn*nums[start];
        
        int p1=turn*nums[start] + getPoints(nums, start+1, end, -1*turn);
        int p2=turn*nums[end] + getPoints(nums, start, end-1, -1*turn);
        
        return turn*max(turn*p1, turn*p2);
    }
    
    
};