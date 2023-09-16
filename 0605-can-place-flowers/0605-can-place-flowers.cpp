class Solution {
public:
    bool canPlaceFlowers(vector<int>& fd, int n) {
        if(n==0)
            return true;
        
        int p= fd.size();
               
        if(p==1){
            if(fd[0]==0 and n==1)
                return true;
                        
            if(fd[0]==1)
                return false;
           
        }
        
        for(int i=0; i<p; i++){
           cout << "big i: " << i << " n " << n << endl;

            if(i==0){
                if(fd[0]==0 and fd[1]==0)
                    n--, i++;
            }
            
            else if(i==p-1){
                if(fd[i]==0 and fd[i-1]==0)
                    n--, i++;
            }
            
            else if(fd[i]==0 and fd[i-1]==0 and fd[i+1]==0){
                n--, i++;
            }
            
            cout << "end i: " << i << " n " << n << endl;
            if(n==0)
                return true;
        }
        
        return n==0;
       
    }
};


      // to plant at i, 
        // fd[i]=0, fd[i-1]=0, fd[i+1]=0;
        // if i==0, fd[0]=0 and fd[1]=0
        // if i=p-1 fd[p-1]=0, fd[p=2] =0
        // once placed, make fd[i+1]=1
        // n--
        // final n==0  
        // 0 0 true
        // 0 1 true
        // 1 0 tru
        // 1 1 true