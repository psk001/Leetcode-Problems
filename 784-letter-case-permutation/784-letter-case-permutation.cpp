class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        recursion(s, 0, res, s.size());
        return res;
    }
    void recursion(string& s, int l, vector<string>& res, int n) {
        if(l == n) {
            res.push_back(s);
            return;
        }
        recursion(s, l+1, res, n);
        if(isalpha(s[l])) {
            s[l] ^= 32;
            recursion(s, l+1, res, n);
        }
    }
};