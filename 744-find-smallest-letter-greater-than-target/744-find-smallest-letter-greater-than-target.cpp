class Solution {
public:
    char nextGreatestLetter(vector<char>& lt, char target) {
        
        if(target<lt[0])
            return lt[0];
        if(target>=lt[lt.size()-1])
            return lt[0];
        
        int i=0;
        while(lt[i]<=target)
            i++;
        
        // i=(i==lt.size()-1)?0: (i);
        
        return lt[i];
        
//         int l=0, r=lt.size()-1, res, m;
//         while(l<r){
//             m=l+(r-l)/2;
            
//             if(lt[m]==target){
//                 res=m;
//                 l=m+1;
//             }
//             else if(lt[m]>target)
//                 r=m;
//             else
//                 l=m+1;
//             // cout << "l: " << l << " r: " << r << " m: " << m << " res: " << res << endl;
//         }
        
        // res=(res==lt.size()-1)?0 : (res+1);
        
        // return lt[m];
        
    }
};