class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<arr.size(); i++){
            if(binary_search(arr.begin()+i+1, arr.end(), arr[i]*2))
                return true;
        }
        
        for(auto &i: arr)
            i*=-1;
        
        reverse(arr.begin(), arr.end());
        
        for(int i=0; i<arr.size(); i++){
            if(binary_search(arr.begin()+i+1, arr.end(), arr[i]*2))
                return true;
        }        
        
        return false;
    }
};