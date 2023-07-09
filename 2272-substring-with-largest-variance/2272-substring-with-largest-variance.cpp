class Solution {
public:
    int largestVariance(string s) {
        int n = s.size();
        int res = 0;
        
        for (char p='a'; p<='z'; p++) {
            for (char q='a'; q<='z'; q++) {
                if (p == q) 
                    continue;
                
                int pc= 0, qc= 0;

                int flag= 0;
                
                for (auto c : s) {
                    if (c == p) 
                        pc++;
                    if (c == q) 
                        qc++;
                    
                    if (qc>0)
                        res= max(res, pc-qc);
            
                    else if (qc==0 and flag)
                        res= max(res, pc-1);
                    
                    if (qc>pc) {
                        qc=pc=0;
    
                        flag=1;
                    }
                }
            }
        }
        return res;
    }
};