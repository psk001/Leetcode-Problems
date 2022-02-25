class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n==1)
            return n;
        if(n==2)
            return 1;
        
        vector<int> res(n+1);
        res[0]=0, res[1]=1, res[2]=1;
        
        for(int i=3; i<=n; i++)
            res[i]=res[i-1]+res[i-2]+res[i-3];
        
        for(auto i: res)
            cout << i << " ";
        cout << endl;
        
        return res[n];
    }
};