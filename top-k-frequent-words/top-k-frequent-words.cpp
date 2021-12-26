class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> col;
        
        for(auto i: words)
            col[i]++;
        
        vector< pair <int, string> > temp;
        
        for(auto i: col)
            temp.push_back({i.second, i.first});
        
        sort(temp.begin(), temp.end(), cmp);
        
        
        vector<string> res;
        
        for(int i=0; i<k; i++)
            res.push_back(temp[i].second);
        
        return res;
        
    }
    
    static bool cmp(pair <int, string> &a, pair <int, string> &b){
        if(a.first==b.first) 
            return a.second < b.second;
        return (a.first > b.first);
    }
};