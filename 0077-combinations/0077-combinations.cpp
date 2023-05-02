class Solution {
public:
    void solve(int n,int k,int idx,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ds.size()==k)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<=n;i++)
        {
            ds.push_back(i);
            solve(n,k,i+1,ds,ans);
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