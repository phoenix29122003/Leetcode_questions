//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int dp[1001][1001];
	int solve(string &s,string &t,int i,int j,int cx,int cy,int m,int n){
        if(dp[i][j]!=-1) return dp[i][j];
        if(i>=m && j>=n) return 0;
        if(j>=n) return dp[i][j]=cx+solve(s,t,i+1,j,cx,cy,m,n);
        if(i>=m) return dp[i][j]=cy+solve(s,t,i,j+1,cx,cy,m,n);
        if(s[i]==t[j]) return dp[i][j]=solve(s,t,i+1,j+1,cx,cy,m,n);
        else return dp[i][j]=min(cx+solve(s,t,i+1,j,cx,cy,m,n),cy+solve(s,t,i,j+1,cx,cy,m,n));
    }
	int findMinCost(string s, string t, int cx, int cy){
	    memset(dp,-1,sizeof(dp));
        return solve(s,t,0,0,cx,cy,s.length(),t.length());
	}
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
       	string x, y;
       	cin >> x >> y;
        
       	int costX, costY;
       	cin >> costX >> costY;

        

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends