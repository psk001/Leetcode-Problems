class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(auto i: s){
            if( i=='{' || i=='[' || i=='(' )
                st.push(i);
            
            else{
                if(st.empty())
                    return false;
            
                if( (i=='}' and st.top()=='{') or (i==')' and st.top()=='(') or (i==']' and st.top()=='[')  )
                    st.pop();
                
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        
        return false;
        
    }
};