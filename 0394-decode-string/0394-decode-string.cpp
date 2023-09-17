class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        
        for(auto i: s){
            // cout << i << endl;
            if(i!=']'){
                st.push(i);
            }else {
                string last= "";
                string ml="";
                
                while(st.top()!='['){
                    last=st.top()+last;
                    st.pop();
                }
                
                st.pop();
                
                while(!st.empty() and isdigit(st.top())){
                    ml=st.top()+ml;
                    st.pop();
                }
                
                int k= stoi(ml);
                
                while(k--){
                    for(int j=0; j<last.size(); j++)
                        st.push(last[j]);
                }   
                
                cout << k << " " << last << endl;
            }
        }
        
        string res="";
        
        while(!st.empty()){
            res= st.top()+res;
            st.pop();
        }
        
        return res;
    }
};