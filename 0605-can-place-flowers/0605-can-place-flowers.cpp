class Solution {
public:
    bool canPlaceFlowers(vector<int>& fd, int n) {
        int res=0, i=0;

        while(i<fd.size()){
            
            if( fd[i]==0 and (i==0 or fd[i-1]==0) and (i==fd.size()-1 or fd[i+1]==0) )
                fd[i]=1, res++;
            
            if(res>=n)
                return true;
            
            i++;
        }
        
        return false;
    }
};