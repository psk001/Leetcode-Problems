//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        
        // Your code here
        sort(arr, arr+n, srt);
        
        double res=0;
        
        for(int i=0; i<n; i++){
            double tw= min(W, arr[i].weight);
            W-= tw;
            res+= static_cast<double> (tw * arr[i].value/ arr[i].weight);
            
            // cout << "i " << i << " W: " << W << " res: " << res << endl;
            if(W<=0)
                break;
        }
        
        return res;
    }
    
    static bool srt(const Item& a, const Item& b) {
        double ratioA = static_cast<double>(a.value) / a.weight;
        double ratioB = static_cast<double>(b.value) / b.weight;
        return ratioA > ratioB; 
    }


        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends