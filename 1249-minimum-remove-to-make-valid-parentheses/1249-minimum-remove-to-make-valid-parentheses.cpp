class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        stack<pair <char, int> > st;
        string t=s;
        
        for(int i=0; i<n; i++){
            if(t[i]>=97 and t[i]<=122)
                continue;
            
            else if(t[i]=='(')
                st.push({t[i], i});
            
            else{
                if(!st.empty())
                    st.pop();
                else{
                    t.erase(t.begin()+i);
                    n--;
                    i--;
                }
            }
            // cout << "curr: " << t << endl;
        }
        
        // cout << "for loop finished\n";
        
        while(!st.empty()){
            // cout << "curr: " << t << endl;
            t.erase(t.begin()+st.top().second);
            st.pop();
        }
        
        if(t.size()==0)
            return "";
        
        return t;
        
    }
};