//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

//User function template for C++

class Solution {
  public:
    long long getSubstringWithEqual012(string str) {
        int N=str.length();
        map<pair<int,int>,int>mp;
        mp[make_pair(0,0)]=1;
        int zc=0,oc=0,tc=0;
        int res=0; 
        for(int i=0;i<N;++i)
        {
            if(str[i]=='0') zc++;
            else if(str[i]=='1') oc++;
            else tc++;
            pair<int,int>tmp=make_pair(zc-oc,zc-tc);
            res=res+mp[tmp];
            mp[tmp]++;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.getSubstringWithEqual012(s)<<endl;
	}
    return 0;
}

// } Driver Code Ends