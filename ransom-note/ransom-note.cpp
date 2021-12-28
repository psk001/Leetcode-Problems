class Solution {
public:
    bool canConstruct(string r, string m) {
        if(r.size()>m.size())
            return false;
        
        if(r.size()==m.size()){
            sort(r.begin(), r.end());
            sort(m.begin(), m.end());
            return (r==m);
        }
        
        for(auto i: r){
            auto p = m.find(i);
    
            if(p == string::npos)
                return false;
            m.erase(m.begin()+p);
           // cout << " current mag: " << m << endl;
        }
        
        return true;
    }
};