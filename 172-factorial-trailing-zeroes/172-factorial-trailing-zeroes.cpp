class Solution {
public:
    int trailingZeroes(int n) {
        if(n<5)
            return 0;
        int res=0;
        int power=log2(n)/log2(5);
        // cout << "power: " << power << endl;
        while(power){
            int val=pow(5, power);
            res+=n/val;
            power--;
            // cout << "power: " << power << " n: " << n << " res: " << res << endl;
        }
        
        return res;
        
    }
};