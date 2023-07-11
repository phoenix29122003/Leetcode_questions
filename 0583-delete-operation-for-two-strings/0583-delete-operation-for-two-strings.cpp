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





























// vector<vector<int> >dp;
// int minDistance(string& word1, string& word2) {
// 	// dp[i][j] will denote minimum steps required to equalize word1[i:end] and word[2:j:end]
// 	dp.resize(size(word1) + 1, vector<int>(size(word2) + 1, 1000));
// 	return solve(word1, word2, 0, 0);
// }
// int solve(string &w1, string &w2, int i, int j) {
// 	if(i == size(w1) && j == size(w2)) return 0;
// 	if(i == size(w1) || j == size(w2)) return max(size(w1) - i, size(w2) - j);
// 	if(dp[i][j] != 1000) return dp[i][j];  // directly return stored answer if already computed before
// 	if(w1[i] == w2[j]) return solve(w1, w2, i + 1, j + 1);
// 	return dp[i][j] = 1 + min(solve(w1, w2, i + 1, j), solve(w1, w2, i, j + 1));
// }