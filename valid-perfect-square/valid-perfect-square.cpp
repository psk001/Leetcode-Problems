class Solution {
public:
    bool isPerfectSquare(int num) {

        long int i;
        for(i=1; i*i<=num; i++)
            if(i*i==num)  return true;
        
        return false;
    }
};