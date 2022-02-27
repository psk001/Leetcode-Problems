class Solution {
    long long tim(vector<int>& ta, int time){
        long long cnt=0;
        
        for(auto i: ta)
            cnt+=(time/i);
        
        return cnt;
    }
public:
    long long minimumTime(vector<int>& time, int numt) {    
        if(time.size()==1)
            return (long long)time[0]*numt;
        
        long long int low=0, high=1e14;
        int res=high;
        
        while(low<=high){
            long long mid = (low+high)>>1;
        
            if(tim(time, mid) >= numt){
                res=mid;
                high=mid-1;
            }   
            else{
                low=mid+1;
            }
        }
        
        return res;
        
    }
};