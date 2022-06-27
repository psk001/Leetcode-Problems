class Solution {
public:
    int minPartitions(string n) {
        char res=0;
        for(auto i: n)
            res=max(res, i);
        
        return res-'0';
    }
};