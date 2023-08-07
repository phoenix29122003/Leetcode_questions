class Solution {
public:
    int dp[1001][1001];
    int lcs(string &text1, string &text2,int m,int n) 
    {
        if(m==0 || n==0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        if(text1[m-1]==text2[n-1]) return dp[m][n]=1+lcs(text1,text2,m-1,n-1);
        else return dp[m][n]= max(lcs(text1,text2,m-1,n),lcs(text1,text2,m,n-1));
    }
    int minInsertions(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        int m=s.size(),n=t.size();
        memset(dp,-1,sizeof(dp));
        return s.length()-lcs(s,t,m,n);
    }
};