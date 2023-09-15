class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int cmax= INT_MIN;
        
        for(auto i: candies)
            cmax= max(cmax, i);
        
        vector<bool> res (candies.size());
        
        for(int i=0; i<candies.size(); i++){
            res[i]= candies[i]+extraCandies>=cmax;
        }
        
        return res;
    }
};