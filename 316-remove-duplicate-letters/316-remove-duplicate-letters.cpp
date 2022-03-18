class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastIndex(26, 0);
        
        for (int i = 0; i < s.length(); i++)
            lastIndex[s[i] - 'a'] = i; 
        
        
        vector<bool> visited(26, false); 
        stack<char> st;
        
        for (int i=0; i<s.size(); i++) {
            int curr = s[i] - 'a';
            
            if (visited[curr]) 
                continue;
            
            while(st.size()>0 and st.top()>s[i] and i<lastIndex[st.top()-'a']){
                visited[st.top() - 'a']=false; 
                st.pop();
            }
            
            st.push(s[i]); 
            visited[curr]=true; 
        }
        
        string res="";
        
        while (st.size()>0){
            res+=st.top();
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};