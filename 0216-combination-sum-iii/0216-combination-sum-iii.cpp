class Solution {
public:
    void solve(int idx,int k,int n,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(n<0 || ds.size()>k) return;
        if(ds.size()==k && n==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<=9;i++)
        {
            ds.push_back(i);
            solve(i+1,k,n-i,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(1,k,n,ds,ans);
        return ans;
    }
};