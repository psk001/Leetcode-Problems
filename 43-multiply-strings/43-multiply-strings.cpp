class Solution {
    vector<int> dig(string& s1, int c, int nz){
        vector<int> res(nz, 0);
        int sm, cr=0;
        
        for(int i=0; i<s1.size(); i++){
            sm = ((s1[i]-'0')* c + cr);
            cr = sm/10;
            res.push_back(sm%10);
        }
        
        if(cr>0)
            res.push_back(cr);
        
        return res;
    }
    
    string answer(vector< vector<int> >& results){
        vector<int> ans = results.back();
        vector<int> currAns;
        results.pop_back();
        
        for(vector<int> result: results){
            currAns.clear();
            int cr=0;
            
            for(int i=0; i<ans.size() || i<result.size(); ++i){
                int d1=i<result.size() ? result[i] : 0;
                int d2=i<ans.size() ? ans[i] : 0;
                
                int sm=d1+d2+cr;
                cr=sm/10;
                currAns.push_back(sm%10);                
            }
            
            if(cr)
                currAns.push_back(cr);
            
            ans=currAns;
        }
        
        string finRes;
        
        for(int i: ans) 
            finRes.push_back(i + '0');
        
        return finRes;        
    }
    
public:
    string multiply(string num1, string num2) {
     
        if(num2=="0" or num1=="0")
            return "0";
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        vector<vector<int> > results;
        
        for(int i=0; i<num1.size(); i++)
            results.push_back(dig(num2, num1[i]-'0', i));
        
        string res=answer(results);
        reverse(res.begin(), res.end());
        
        return res;
            
    }
};