class Solution {
public:
    int partitionString(string s) {
        int res=0;
        map<int, int>col;
        
        for(int i=0; i<s.size(); i++){
            if(col[s[i]]!=0){
                res++;
                col.clear();
            }
            col[s[i]]++;
        }
        
        // cout << "res: " << res << " col size: " << col.size() << endl;
        res+= (col.size()!=0);
        
        return res;
    }
};