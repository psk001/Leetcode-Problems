class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int a = count(op.begin(), op.end(), "++X");
        int b = count(op.begin(), op.end(), "--X");
        int c = count(op.begin(), op.end(), "X++");
        int d = count(op.begin(), op.end(), "X--");
        int res = a+c - b-d;
        return res;
    }
};