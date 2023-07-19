//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    vector<int> smallestDifferenceTriplet(int arr1[], int arr2[], int arr3[], int n)
    {
        sort(arr1, arr1+n);
        sort(arr2, arr2+n);
        sort(arr3, arr3+n);
        int res_min, res_max, res_mid;
        int i = 0, j = 0, k = 0;
        int diff = INT_MAX;
        while (i < n && j < n && k < n)
        {
            int sum = arr1[i] + arr2[j] + arr3[k];
            int maxi = max({arr1[i], arr2[j], arr3[k]});
            int mini = min({arr1[i], arr2[j], arr3[k]});
            if (mini == arr1[i]) i++;
            else if (mini == arr2[j]) j++;
            else k++;
            if (diff > (maxi-mini))
            {
                diff = maxi - mini;
                res_max = maxi;
                res_mid = sum - (maxi + mini);
                res_min = mini;
            }
        }
        vector<int>ans;
        ans.push_back(res_min);
        ans.push_back(res_mid);
        ans.push_back(res_max);
        reverse(ans.begin(),ans.end());
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
		int n;
		cin>>n;
		int a[n],b[n],c[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		for(int i=0;i<n;++i)
			cin>>b[i];
		for(int i=0;i<n;++i)
			cin>>c[i];
		
		Solution ob;	
		vector<int> ans=ob.smallestDifferenceTriplet(a,b,c,n);
		cout<< ans[0] <<" "<<ans[1]<<" "<<ans[2] << endl;
	}
	return 0;
}

// } Driver Code Ends