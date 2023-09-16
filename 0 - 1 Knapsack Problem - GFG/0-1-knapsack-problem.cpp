//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1001][1001];
    int solve(int val[],int wt[],int idx,int n,int W){
        if(idx==n || W==0) return 0;
        if(dp[idx][W]!=-1) return dp[idx][W];
        int ans;
        if(wt[idx]<=W) ans=max(val[idx]+solve(val,wt,idx+1,n,W-wt[idx]),solve(val,wt,idx+1,n,W));
        else ans=solve(val,wt,idx+1,n,W);
        return dp[idx][W]=ans;
    }
    int knapSack(int W, int wt[], int val[], int n) { 
       // Your code here
       memset(dp,-1,sizeof(dp));
       return solve(val,wt,0,n,W);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends