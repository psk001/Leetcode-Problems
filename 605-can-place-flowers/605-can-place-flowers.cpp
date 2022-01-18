class Solution {
public:
    bool canPlaceFlowers(vector<int>& fd, int n) {
        int res=0;
        
        if(fd.size()==1 and fd[0]==0)
            return (res<=n);
        
        else if(fd.size()==1 and fd[0]==1)
            return (n==0);
        
        if((fd[0]==0 and fd[1]==0) ){
                res++;
                fd[0]=1;
        }
        
        if(fd.size()>2 and fd[fd.size()-1]==0 and fd[fd.size()-2]==0){
                res++;
                fd[fd.size()-1]=1;
        }
        
        for(int i=1; i<fd.size()-1; i++){          
            
            if(fd[i]==0 and fd[i-1]==0 and fd[i+1]==0){
                fd[i]=1;
                res++;
            }
            cout << "i: " << i << " res: " << res << endl;
        }
        
        return (res>=n);
    }
};