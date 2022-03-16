class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        
        for(auto i: s){
            if(i=='#' and st.empty())
                continue;
            else if (i=='#')
                st.pop();
            else
                st.push(i);
        }
        
        string r1="";
        
        while(!st.empty()){
            r1=st.top()+r1;
            st.pop();
        }
        

        
        for(auto i: t){
            if(i=='#' and st.empty())
                continue;
            
            if(i=='#')
                st.pop();
            else
                st.push(i);
        }
        
        string r2="";
        
        while(!st.empty()){
            r2=st.top()+r2;
            st.pop();
        }        
        
        return (r1==r2);
    }
};