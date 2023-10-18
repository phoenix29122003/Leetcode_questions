//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int shouldPunish (int arr[], int marks[], int n, double avg)
    {
        int i,j,cnt=0;
        bool swapped;
        for(i=0;i<n-1;i++){
            swapped=false;
            for(j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped=true;
                    cnt++;
                }
            }
            if(swapped==false) break;
        }
        int sum=0;
        for(int i=0;i<n;i++) sum+=marks[i];
        sum-=cnt;
        int comp=(double)sum/n;
        return comp>avg;
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}

// } Driver Code Ends