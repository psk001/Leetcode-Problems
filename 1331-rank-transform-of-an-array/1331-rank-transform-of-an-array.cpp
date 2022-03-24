class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> t(arr.begin(), arr.end());
        sort(t.begin(), t.end());
        
        map<int,int> col;
        int r=1;
        for(int i=0; i<t.size(); i++){
            if(col[t[i]] != 0)
                col[t[i]]=col[t[i]];
            else
                col[t[i]]=r++;
        }
        
        for(int i=0; i<arr.size(); i++)
            arr[i]=col[arr[i]];
        
        return arr;
    }
};