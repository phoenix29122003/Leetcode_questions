class Solution {
public:
    void solve(TreeNode *root,int target,unordered_map<long long,int>mp,long long curr,int &ans){
        if(root==NULL) return;
        curr+=root->val;
        if(curr==target) ans++;
        if(mp.find(curr-target)!=mp.end()) ans+=mp[curr-target];
        mp[curr]++;
        solve(root->left,target,mp,curr,ans);
        solve(root->right,target,mp,curr,ans);
    }
    int pathSum(TreeNode* root, int target) {
        int ans=0;
        unordered_map<long long,int>mp;
        solve(root,target,mp,0,ans);
        return ans;
    }
};