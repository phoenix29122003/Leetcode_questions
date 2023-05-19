class Solution {
public:
    void solve(vector<int>&nums,int idx,vector<vector<int>>&ans)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[idx],nums[i]);
            solve(nums,idx+1,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(nums,0,ans);
        set<vector<int>>s;
        for(auto it:ans) s.insert(it);
        ans.clear();
        for(auto itr:s) ans.push_back(itr);
        return ans;
    }
};