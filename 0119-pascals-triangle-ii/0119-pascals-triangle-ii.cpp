// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
        
//     }
// };


class Solution {
public:
    vector<int> getRow(int numRows) {
        if(numRows==0)
            return {1};
    
        
        vector< vector<int> > pascal;
        vector<int> res;
        
        for(int i=0; i<numRows+1; i++){
            vector<int> temp(i+1);
            temp[0]=1, temp[i]=1;
            for(int j=1; j<i; j++){
                temp[j] = pascal[i-1][j-1]+pascal[i-1][j];
            }
            pascal.push_back(temp);
        }
        res=pascal[numRows];
        
        return res;
    }
};