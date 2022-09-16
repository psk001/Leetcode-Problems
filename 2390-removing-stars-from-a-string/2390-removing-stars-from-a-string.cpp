class Solution {
public:
    string removeStars(string s) {
        map<int, int> col;
        for(int i=0; i<s.size(); i++)
            col[i]++;
        
//         cout << "start: \n";
        
//         for(auto i: col)
//             cout << i.first << ": " << i.second << " ";
        
//         cout << endl;
        
        stack<int> last;
        int lastCharIdx;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='*'){
                col[i]=0;
                int lt= last.top();
                last.pop();
                col[lt]=0;
            }
            else
                last.push(i);
        }
        
//         cout << "end: \n";
//         for(auto i: col)
//             cout << i.first << ": " << i.second << " ";
        
//         cout << endl;
        
        string res="";
        
        for(auto i: col){
            if(i.second==1)
                res+=s[i.first];
        }
        
        // cout << "res: " << res << endl;
        return res;
    }
};