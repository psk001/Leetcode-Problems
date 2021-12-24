class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, r=numbers.size()-1;
        vector<int> p(2);
        
        while(l<r){
            if(numbers[l]+numbers[r]==target){
                p[0]=l+1, p[1]=r+1;
                break;
            }
            else if(numbers[l]+numbers[r]>target)
                r--;
            else
                l++;
        }
        return p;
    }
};