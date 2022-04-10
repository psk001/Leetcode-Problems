class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>=0 and  binary_search(arr.begin()+i+1, arr.end(), arr[i]*2))
                return true;
            
            if(i!=0 and arr[i]<0 and  binary_search(arr.begin(), arr.begin()+i, arr[i]*2))
                return true;
            
        }
        
       
        
        return false;
    }
};