class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        int n= a.size();
        
        sort(a.begin(), a.end());
        
        long long int m= mass;
        
        if(m<a[0])
            return 0;
        
        for(int i=0; i<n; i++){
            if(m<a[i])
                return 0;
            m+=a[i];
        }
        
        return 1;
    }
};