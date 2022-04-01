class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        int m=2*k;
        
        for(int i=0; i<n; i+=m){
            int l=i, r=i+k-1;
            cout << "l: " << l << " r: " << r << endl;
            if(i+k>=n)
                r=n-1;
            while(l<r){
                swap(s[l], s[r]);
                l++, r--;
            }
        }
        
        return s;
    }
};