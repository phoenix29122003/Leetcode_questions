//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    static bool comp(const vector<int>&v1,const vector<int>&v2)
    {
        if(v1[0]==v2[0] and v1[1]==v2[1]) return v2[2]>v1[2];
        if(v1[0]==v2[0] and v1[1]!=v2[1]) return v1[1]>v2[1];
        return v2[0]>v1[0];
    }
    void customSort (int phy[], int chem[], int math[], int n)
    {
        // your code here
        vector<vector<int>>v;
        for(int i=0;i<n;i++) v.push_back({phy[i],chem[i],math[i]});
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<n;i++)
        {
            phy[i]=v[i][0];
            chem[i]=v[i][1];
            math[i]=v[i][2];
        }
    }
};

//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int phy[n];
		int chem[n];
		int math[n];
		for (int i = 0; i < n; ++i)
			cin >> phy[i] >> chem[i] >> math[i];
        Solution ob;
		ob.customSort (phy, chem, math, n);
		for (int i = 0; i < n; ++i)
			cout << phy[i] << " " << chem[i] << " " << math[i] << endl; 
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends