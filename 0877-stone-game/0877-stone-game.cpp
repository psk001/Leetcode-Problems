class Solution {
public:
    int sm;
    bool stoneGame(vector<int>& piles) {
        // map< pair<int, int>, int> st;
        // sm= accumulate(piles.begin(), piles.end(), 0);
        // return cpm(0, 0, piles.size()-1, piles, st);
        return true;
    }
    
    int cpm(int ac, int start, int end, vector<int>& p, map<pair<int, int>,int>& st){
        if(start>=end)
            return ac>sm/2;
        
        
        if(st[{start, end}]!=0)
            return st[{start, end}];
        

        int asbs= cpm(ac+p[start], start+2, end, p, st);
        int asbe= cpm(ac+p[start], start+1, end-1, p, st);

        int aebs= cpm(ac+p[end], start+1, end-1, p, st);
        int aebe= cpm(ac+p[end], start, end-2, p, st);

        st[{start, end}]= ( asbs || asbe || aebs || aebe );

        return st[{start, end}];

    }
};