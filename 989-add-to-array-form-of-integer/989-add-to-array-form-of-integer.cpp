class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ka;
        
        while(k!=0){
            ka.push_back(k%10);
            k/=10;
        }
        
        reverse(num.begin(), num.end());
        
        vector<int> res;
        
        int cr=0;
        
        int idx=0, size=max(num.size(), ka.size());
        
        while(idx<size){
            int a= (idx<num.size()) ? num[idx] : 0;
            int b= (idx<ka.size())? ka[idx] : 0;
            
            int sm=a+b+cr;
            
            res.push_back(sm%10);
            cr=sm/10;
            idx++;
        }
        
        if(cr>0)
            res.push_back(cr);
        
        reverse(res.begin(), res.end());
        
        return res;
        
    }
};