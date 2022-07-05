class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long p= num/3;
        if(p*3 !=num)
            return {};
        
        return {p-1, p, p+1};
    }
};