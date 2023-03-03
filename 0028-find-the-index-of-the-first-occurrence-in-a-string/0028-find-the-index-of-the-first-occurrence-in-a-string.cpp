class Solution {
public:
    int strStr(string haystack, string needle) {
        auto p= haystack.find(needle);
        if(p != string::npos)
            return p;
        else
            return -1;
    }
};