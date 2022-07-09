class Solution {
public:    
    bool canReach(vector<int>& arr, int start){
        vector<int>visited(arr.size(), -1);
        return canReach(arr, visited, start);
    }
    
    bool canReach(vector<int>& arr, vector<int>& visited, int idx){
        // cout << "idx: " << idx << endl;
        if(idx<0 or idx>=arr.size() || visited[idx]==1)
            return false;
        
        if (arr[idx]==0)
            return true;
    
        visited[idx]= 1;
        
        return (canReach(arr, visited, idx-arr[idx]) or canReach(arr, visited, idx+arr[idx]));
    }
};