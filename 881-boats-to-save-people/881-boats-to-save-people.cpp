class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int res=0;
        
        int l=0, r=people.size()-1;
        
        while(l<=r){
            if(l==r){
                res++;
                break;
            }
            
            if(people[l]+people[r]<=limit){
                l++;
                r--;
                res++;    
            }
            
            else{
                res++;
                r--;
            }
        }
        
        return res;
        
    }
};