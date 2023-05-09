class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int ans=n;
        bool dp[n][n];
        memset(dp,false,sizeof dp);
        for(int i=0;i<n;i++) dp[i][i]=1;
        for(int gap=2;gap<=n;gap++)
        {
            for(int start=0;start+gap<=n;start++)
            {
                int end=start+gap-1;
                if(start==end-1)
                {
                    dp[start][end]=s[start]==s[end];
                }
                else 
                {
                    dp[start][end]=s[start]==s[end] && dp[start+1][end-1]==1;
                }
                if(dp[start][end]==1) ans++;
            }
        }
        return ans;
    }
};



