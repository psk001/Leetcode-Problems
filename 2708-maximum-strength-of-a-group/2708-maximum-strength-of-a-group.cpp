class Solution {

    #define ll long long int

public:
    long long maxStrength(vector<int>& nums) {

        int n= nums.size();

        if(n==1)
            return nums[0];

        ll count= 0;
        int maxi= INT_MIN;
        ll count2= 0;
        ll ans= 1;
        int count0= 0;

        for(auto i:nums){

            if(i==0){
                count0++;
                continue;
            }

            if(i<0){
                count++;
                maxi= max(maxi,i);
            } else {
                count2++;
            }

            ans= ans*abs(i);
        }

        if(count0==n)
            return 0;

        if(count+count0==n && count==1)
            return 0;

        if(count%2==0){
            return ans;
        } else {
            return (ans/abs(maxi));
        }
    }
};