class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
//         int st= 0, end= letters.size();
                
//         while(st<end){
//             int mid= (st+end)/2;
            
//             if()
//         }
        
        auto res= letters[0];
        
        for(auto i: letters)
            if(i>target)
                return i;
        
        return res;
    }
};