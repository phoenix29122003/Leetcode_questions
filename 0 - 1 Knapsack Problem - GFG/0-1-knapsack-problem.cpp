//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int dp[1001][1001];
    int solve(int wt[],int val[],int idx,int n,int W){
        if(idx==n || W==0) return 0;
        if(dp[idx][W]!=-1) return dp[idx][W];
        int ans;
        if(wt[idx]<=W){
            ans=max(val[idx]+solve(wt,val,idx+1,n,W-wt[idx]),solve(wt,val,idx+1,n,W));
        }
        else ans=solve(wt,val,idx+1,n,W);
        return dp[idx][W]=ans;
    }
    int knapSack(int W, int wt[], int val[], int n) { 
       memset(dp,-1,sizeof(dp));
       return solve(wt,val,0,n,W);
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