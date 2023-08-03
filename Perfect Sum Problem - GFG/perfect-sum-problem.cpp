//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int M=1e9+7;
	int solve(int arr[],int i,int sum,vector<vector<int>>& dp){
	    if(sum<0) return 0;
	    if(i==-1){
	        if(sum==0) return 1;
	        else return 0;
	    }
	    if(dp[i][sum]!=-1) return dp[i][sum];
	    int ans=solve(arr,i-1,sum,dp);
	    ans+=solve(arr,i-1,sum-arr[i],dp);
	    return dp[i][sum]=(ans)%M;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        
        int ans=solve(arr,n-1,sum,dp);
        return ans;
	}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends