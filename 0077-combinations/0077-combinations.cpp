class Solution {
public:
    void solve(int n,int k,int i,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ds.size()==k)
        {
            ans.push_back(ds);
            return;
        }
        for(int j=i;j<=n;j++)
        {
            ds.push_back(j);
            solve(n,k,j+1,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(n,k,1,ds,ans);
        return ans;
    }
};