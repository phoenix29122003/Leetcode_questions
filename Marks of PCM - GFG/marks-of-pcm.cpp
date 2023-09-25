//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    bool static comp(vector<int>a,vector<int>b){
        if(a[0]==b[0] && a[1]==b[1]) return a[2]<b[2];
        else if(a[0]==b[0]) return a[1]>b[1];
        else return a[0]<b[0];
    }
    void customSort (int phy[], int chem[], int math[], int n){
        vector<vector<int>>vec(n,vector<int>(3,0));
        for(int i=0;i<n;i++){
            vec[i][0]=phy[i];
            vec[i][1]=chem[i];
            vec[i][2]=math[i];
        }
        sort(vec.begin(),vec.end(),comp);
        for(int i=0;i<n;i++){
            phy[i]=vec[i][0];
            chem[i]=vec[i][1];
            math[i]=vec[i][2];
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