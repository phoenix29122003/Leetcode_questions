class Solution {
public:
    void solve(int idx,int n,int k,int target,vector<int>&ds,vector<vector<int>>&ans){
        if(target==0 && ds.size()==k){
            ans.push_back(ds);
            return;
        }
        if(target<0 || ds.size()>k || idx>n) return;
        for(int i=idx;i<=n;i++){
            ds.push_back(i);
            solve(i+1,n,k,target-i,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(1,9,k,n,ds,ans);
        return ans;
    }
};