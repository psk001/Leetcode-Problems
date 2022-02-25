class Solution {
public:
    int compareVersion(string v1, string v2) {
        vector<int> va;
        vector<int> vb;
 
        stringstream ss(v1);
        string substr;
        int x=0;
        
        while (ss.good()) {            
            getline(ss, substr, '.');
            stringstream toInt(substr);            
            toInt >> x;
            va.push_back(x);
        }

        stringstream st(v2);
        
        while(st.good()){
            getline(st, substr, '.');
            stringstream toInt(substr);
            toInt>>x;
            vb.push_back(x);
        }
        
        while(va.size()<vb.size())
            va.push_back(0);
        
        while(vb.size()<va.size())
            vb.push_back(0);
        
//         cout << "version1: ";
//         for(auto i: va)
//             cout << i << " ";
        
//         cout << endl;
//         cout << "version2: ";
//         for(auto i: vb)
//             cout << i << " ";
        
//         cout << endl;        
        
        for(int i=0; i<va.size(); i++){
            if(va[i]>vb[i])
                return 1;
            else if(va[i]<vb[i])
                return -1;
        }
        
        return 0; 
    }
    
    
    
};