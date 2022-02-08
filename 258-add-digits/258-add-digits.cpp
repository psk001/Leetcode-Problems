class Solution {
public:
    int addDigits(int num) {
        int res=INT32_MAX;
       
        while(res>=10){
         
            int sum=0;
            while(num){
                sum+=num%10;
                num/=10;
               
            }
            cout << "sum: "<<sum;
            num=sum;
            res=sum;
            if(res<10)break;
        }
        
        return res;
    }
};