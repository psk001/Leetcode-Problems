class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int> l(seats.size(), 0);
        vector<int> r(seats.size(), 0);
        
        int f=find(seats.begin(), seats.end(), 1)-seats.begin();
                
        for(int i=0; i<seats.size(); i++){
            if(seats[i]==1){
                l[i] =i;
                f=i;
            }
        
            else
                l[i]=f;
        }
    
    
        for(int i=seats.size()-1; i>=0; i--){
            if(seats[i]==1){
                f=i;
                break;
            }
        }
        
        
        for(int i=seats.size()-1; i>=0; i--){
            if(seats[i]==1){
                r[i]=i;
                f=i;
            }
            else
                r[i]=f;
        }
      
        
        int res=-1;
        
        for(int i=0; i<seats.size(); i++){
            int cr = min(abs(i-l[i]), abs(i-r[i]) );
            if(cr>res)
                res=cr;
          //  cout << "curr res: " << res << endl;
        }
            

        
        return res;
    }
};