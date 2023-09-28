//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> res;
        res.push_back(0);
        
        ss(arr, 0, 0, res);
        
        return res;
    }
    
    void ss(vector<int> &arr, int idx, int cs, vector<int>& t){
        if(idx==arr.size())
            return;
            
        t.push_back(cs+arr[idx]); 
        
        ss(arr, idx+1, cs+arr[idx], t);
        ss(arr, idx+1, cs, t);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends