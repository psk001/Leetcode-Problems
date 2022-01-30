class Solution {
public:
    string frequencySort(string s) {
        map<char, int> col;
        
        for(auto i: s)
            col[i]++;
        
        vector<pair<int, int>> ncol;
        
        for(auto i: col)
            ncol.push_back({i.second, i.first});
        
        sort(ncol.rbegin(), ncol.rend());
        
        string res="";
        for(auto i: ncol){
            while(i.first>0){
                res+=i.second;
                i.first--;
            }
        }
        
        return res;
    }
    
    static bool nsort(pair<int, int>a, pair<int, int>b){
        return (a.first > b.first);
    }
};