#define INF 1e8;
class Solution {
public:
    int n;
    unordered_map<string,int>dp;
    int solve(string a,string b,int pos)
    {
        if(pos==n) return INF;
        if(pos==n-1) return 0;
        string s=a+to_string(pos);
        if(dp.count(s)) return dp[s];
        if(a[pos]==b[pos]) return solve(a,b,pos+1);
        int ans=INF;
        for(int i=pos+1;i<n;i++)
        {
            if(a[i]==b[pos])
            {
                swap(a[pos],a[i]);
                ans=min(ans,1+solve(a,b,pos+1));
                swap(a[pos],a[i]);
            }
        }
        return dp[s]=ans;
    }
    int kSimilarity(string s1, string s2) {
        n=s1.length();
        return solve(s1,s2,0);
    }
};