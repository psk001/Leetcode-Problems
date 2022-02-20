class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& i) {
        int n=i.size();
        
        if(n==1)
            return 1;
        
        sort(i.begin(), i.end());

        for(int p=0; p<n;){
            // cout << "     p: " << p << endl;
                    
            if(i[p][0]==i[p+1][0]){
                if(i[p][1]>=i[p+1][1]){
                    i.erase(i.begin()+p+1);
                }
                
                else if(i[p][1]<i[p+1][1]){
                    i.erase(i.begin()+p);
                    //p++;
                }
                               
            }
            
            else if(i[p][0] < i[p+1][0]){
                
                if(i[p][1] >= i[p+1][1]){
                    i.erase(i.begin()+p+1);
                }

                else
                    p++;
            }
            
            else{
                if(i[p][1]>=i[p+1][1]){
                    i.erase(i.begin()+p+1);
                }
                else
                    p++;
            }
            
            if(p+1==i.size())
                break;            
                        
//             for(auto p: i)
//                 cout << p[0] << " " << p[1] << endl; 
            
            
//             cout << "p at the end: " << p << endl;
//             cout << "size at the end: " << i.size() << endl;
//             cout << endl;

            if(i.size()<2)
                break;            
        }
        
    
        
        // for(auto k: i)
        //     cout << k[0] << " " << k[1] << endl;
        
        return i.size();
        
    }
};