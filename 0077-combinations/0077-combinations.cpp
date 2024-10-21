class Solution {
public:
    void solve(int idx,int n,int k,vector<int>&ds,vector<vector<int>>&ans){
        if(ds.size()==k){
            ans.push_back(ds);
        }
        for(int i=idx;i<=n;i++){
            ds.push_back(i);
            solve(i+1,n,k,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(1,n,k,ds,ans);
        return ans;
    }
};