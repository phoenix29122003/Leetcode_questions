class Solution {
public:
    void solve(vector<int>nums,int idx,int k,vector<int>&ds,vector<vector<int>>&ans){
        if(ds.size()==k) {
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            ds.push_back(nums[i]);
            solve(nums,i+1,k,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++) nums.push_back(i);
        vector<int>ds;
        vector<vector<int>>ans;
        solve(nums,0,k,ds,ans);
        return ans;
    }
};