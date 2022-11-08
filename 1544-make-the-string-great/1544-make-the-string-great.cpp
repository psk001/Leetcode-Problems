class Solution {
public:
    string makeGood(string s) {
        if(s.size()<=1)
            return s;

        for(int i=0; i<s.size(); ){
            int diff= abs(s[i]-s[i+1]);
            // cout << "diff: " << diff;
            if(diff != 32)
                i++;
            else{
                s.erase(i, 2);
                i-=1;
            }
            i= (i<0)? 0: i;
            // cout << " i: " << i << " s: " << s << endl;
        }
        
        cout << "res: " << s << endl;
        
        return s;

    }
};