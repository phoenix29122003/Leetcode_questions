class Solution {
public:
    int solve(string &text1, string &text2,int m,int n,int memo[][1001]) 
    {
        if(m==0 || n==0) return 0;
        if(memo[m][n]!=-1) return memo[m][n];
        if(text1[m-1]==text2[n-1]) return memo[m][n]= 1+solve(text1,text2,m-1,n-1,memo);
        else
        {
            return memo[m][n]=max(solve(text1,text2,m-1,n,memo),solve(text1,text2,m,n-1,memo));
        }
    }
    int minDistance(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        int memo[1001][1001];
        memset(memo,-1,sizeof(memo));
        int lcs=solve(text1,text2,m,n,memo);
        return m+n-2*lcs;
    }
};
