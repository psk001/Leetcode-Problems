class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1)
            return false;
        
        stack<char> st;
        
        for(auto i: s){
            if(i=='(' || i== '{' || i=='[')
                st.push(i);
            else if(!st.empty() and ( (i==')' and st.top()=='(') or (i==']' and st.top()=='[') or (i=='}' and st.top()=='{')))
                    st.pop();
            else
                return false;
        }
        
        if(st.size()==0)
            return true;
        
        return false;
        
    }
};