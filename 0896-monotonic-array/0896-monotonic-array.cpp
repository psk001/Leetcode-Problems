class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> n2 = nums;
        vector<int> n3 = nums;

        sort(n2.begin(), n2.end());
        sort(n3.begin(), n3.end(), greater<int>());

        
        return 
            equal(n2.begin(), n2.end(), nums.begin())  or
            equal(n3.begin(), n3.end(), nums.begin());
    }
};