class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n= a.size();
        stack<int> st;
                
        for(int i=0; i<n; ){
            if(st.size()==0){
                st.push(a[i]);
                i++;
            }
            
            else if((st.top()>0 and a[i]<0) ){
                int k= st.top();
                if(abs(k)==abs(a[i])){
                    st.pop();
                    i++;
                }
                else if (abs(k)<abs(a[i])){
                    st.pop();
                }  else{
                    i++;
                }                  
            }
            else {
                st.push(a[i]);
                i++;
            }
            // cout << "i: " << i << endl;
        }
        
        vector<int> res;
        
        while(st.size()>0){
            int p= st.top();
            res.push_back(p);
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};