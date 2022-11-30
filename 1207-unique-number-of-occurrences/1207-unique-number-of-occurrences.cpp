class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> col(1001, 0);
        sort(arr.begin(), arr.end());
        int cnt=1;
        
        for(int i=1; i<arr.size(); i++){
            if(arr[i]==arr[i-1])
                cnt++;
            else{
                // cout << "i: " << i << " val: " << arr[i] << " last: " << arr[i-1] << " cnt: " << cnt << endl;
                if(col[cnt]==1)
                    return false;
                
                col[cnt]=1;
                cnt=1;
            }
        }
        
        if(col[cnt]==1)
            return false;
        
        // for(int i=1; i<=1001; i++)
        //     if(col[i]!=0)
        //         cout << i << " " ;
        // cout << endl;
        return true;
    }
};

// cout << "i: " << i << " val: " << arr[i] << " last: " << arr[i-1] << " cnt: " << cnt << endl;