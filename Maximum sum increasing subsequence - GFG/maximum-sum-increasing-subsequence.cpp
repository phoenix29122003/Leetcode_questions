//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int dp[1001][1001];
	int solve(int arr[],int idx,int prev,int n){
	    if(idx==n) return 0;
	    if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];
	    int take=0,nottake=0;
	    if(prev==-1 || arr[prev]<arr[idx]){
	        take=max(arr[idx]+solve(arr,idx+1,idx,n),solve(arr,idx+1,prev,n));
	    }
	    nottake=solve(arr,idx+1,prev,n);
	    return dp[idx][prev+1]=max(take,nottake);
	}
	int maxSumIS(int arr[], int n) {  
	    memset(dp,-1,sizeof(dp));
	    return solve(arr,0,-1,n);
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends