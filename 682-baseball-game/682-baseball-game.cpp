class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>st;
        
        int k=0;
        for(int i=0;i<ops.size();i++){
            
            if(ops[i]=="+"){
                int p=st[k-1]+st[k-2];
                st.push_back(p);
                k++;
            }
            
            else if(ops[i]=="C"){
                st.pop_back();
                k--;
            }
            
            else if(ops[i]=="D"){
                // cout << "looking for prev element in st: " << st[k-1] << endl;
                st.push_back(st[k-1]*2);
                k++;
            }
            
            else{
                st.push_back(stoi(ops[i]));
                k++;
            }
            
//             cout << "curr st: " ;
//             for(auto i: st)
//                 cout << i << " ";
//             cout << endl;
            
//             cout << "i: "<< i << endl;
        }
        
        int res=0;
        for(auto i: st)
            res+=i;
        return res;
        
    }
};