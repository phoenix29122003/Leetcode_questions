//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k){
	    unordered_map<int,int>mp;
	    int sum=0,ans=0;
	    for(int i=0;i<n;i++) arr[i]=((arr[i]%k)+k)%k;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        sum=sum%k;
	        if(sum==0) ans=i+1;
	        else if(mp.find(sum)!=mp.end()) ans=max(ans,i-mp[sum]);
	        else mp[sum%k]=i;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends