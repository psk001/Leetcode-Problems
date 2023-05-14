class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int res=0;
        for(auto i:derived)
            res+= i;
        return (res%2==0);
    }
}; 