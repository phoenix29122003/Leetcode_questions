//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	int dp[1001][1001];
	int solve(string &s,string &t,int i,int j,int m,int n){
	    if(i==m || j==n) return 0;
	    if(dp[i][j]!=-1) return dp[i][j];
	    if(s[i]==t[j] && i!=j) return dp[i][j]=1+solve(s,t,i+1,j+1,m,n);
	    else return dp[i][j]=max(solve(s,t,i+1,j,m,n),solve(s,t,i,j+1,m,n));
	}
	int LongestRepeatingSubsequence(string str){
	    // Code here
	    memset(dp,-1,sizeof(dp));
	    return solve(str,str,0,0,str.length(),str.length());
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends