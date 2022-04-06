#define mod 1000000007

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {    
        unordered_map<int, long> col;
        
        for(auto i: arr)
            col[i]++;
        
        long res=0;
        
        for(auto i: col){
            for(auto j: col){
                int a=i.first, b=j.first, k=target-a-b;
                
                if(col.count(k)==0)
                    continue;
                
                if(a==b and a==k)
                    res += col[a]*(col[a]-1)*(col[a]-2)/6;
                
                else if(a==b and a!=k)
                    res += col[a] * (col[a]-1)/2 * col[k];
                
                else if(a<b and b<k)
                    res += col[a]*col[b]*col[k];
                
            }
            
        }
            return (res%mod);
    }
};

      // unordered_map<int, long> c;
      //   for (int a : A) c[a]++;
      //   long res = 0;
      //   for (auto it : c)
      //       for (auto it2 : c) {
      //           int i = it.first, j = it2.first, k = target - i - j;
      //           if (!c.count(k)) continue;
      //           if (i == j && j == k)
      //               res += c[i] * (c[i] - 1) * (c[i] - 2) / 6;
      //           else if (i == j && j != k)
      //               res += c[i] * (c[i] - 1) / 2 * c[k];
      //           else if (i < j && j < k)
      //               res += c[i] * c[j] * c[k];
      //       }
      //   return res % int(1e9 + 7);