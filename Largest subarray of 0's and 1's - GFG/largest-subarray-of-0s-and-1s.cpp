//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        unordered_map<int,int>mp;
        int sum=0,ans=0;
        for(int i=0;i<N;i++){
            sum=arr[i]==1?sum+1:sum-1;
            if(sum==0) ans=i+1;
            else if(mp.find(sum)!=mp.end()) ans=max(ans,i-mp[sum]);
            else mp[sum]=i;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends