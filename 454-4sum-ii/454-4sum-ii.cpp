class Solution {
public:
    int fourSumCount(vector<int>& n1, vector<int>& n2, vector<int>& n3, vector<int>& n4) {
        int res=0, n=n1.size();
        
        map<int, int> col1;
        
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
               col1[n1[i]+n2[j]]++;
        
//         for(auto i: col1)
//             cout << i.first << " ";
//         cout << endl;
        
        map<int, int> col2;
        
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
               col2[n3[i]+n4[j]]++;

//         for(auto i: col2)
//             cout << i.first << " ";
//         cout << endl;
        
        
        for(auto i: col1)
            if(col2[-1*i.first]>0)
                res+=i.second*col2[-1*i.first];
                
        
        return res;
    }
};