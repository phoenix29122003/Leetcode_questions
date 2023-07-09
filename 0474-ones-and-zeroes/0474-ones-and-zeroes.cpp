class Solution {
public:
    int dp[101][101][601];
    int solve(vector<pair<int,int>>&a,int idx,int m,int n)
    {
        if(idx==a.size() || (m==0 && n==0)) return 0;
        if(dp[m][n][idx]!=-1) return dp[m][n][idx];
        if(a[idx].first>m || a[idx].second>n) return solve(a,idx+1,m,n);
        int take=1+solve(a,idx+1,m-a[idx].first,n-a[idx].second);
        int not_take=solve(a,idx+1,m,n);
        return dp[m][n][idx]=max(take,not_take);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        vector<pair<int,int>>a;
        for(int i=0;i<strs.size();i++)
        {
            int zero=0,one=0;
            for(auto it:strs[i])
            {
                if(it=='0') zero++;
                else one++;
            }
            a.push_back({zero,one});
        }
        return solve(a,0,m,n);
    }
};