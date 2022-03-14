class Solution {
public:
    string simplifyPath(string path) {
        if(path.size()==1)
            return path;
        
        int start=0;
        
        while(path[start]=='/')
            start++;
        
        stack<string> st;
        
        for(int i=start; i<path.size(); i++){
            if(path[i]=='/')
                continue;
            
            string temp="";
            
            while(path[i] != '/' and i<path.size()){
                temp+=path[i];
                i++;
            }
            
            if(temp==".")
                continue;
            
            else if(temp==".."){
                if(st.empty())
                    continue;
                else
                    st.pop();
            }
            
            
            else{
                st.push(temp+"/");
                // st.push("/");
            }
            show(st);
        }

        
        string res="";
        
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        res="/"+res;
        res.pop_back();
        if(res.size()==0)
            res.push_back('/');
        
        cout << "res: " << res << endl;
        
        return res;
        
    }
    
    void show(stack<string> st){
        string res="";
        while(!st.empty()){
            res+= st.top();
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
    
};