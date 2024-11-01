class Solution {
public:
    void solve(TreeNode *root,int target,long long sum,long long &ans,unordered_map<long long,int>mp){
        if(root==NULL) return;
        sum+=root->val;
        if(sum==target) ans++;
        if(mp.find(sum-target)!=mp.end()) ans+=mp[sum-target];
        mp[sum]++;
        solve(root->left,target,sum,ans,mp);
        solve(root->right,target,sum,ans,mp);
    }
    int pathSum(TreeNode* root, int target) {
        unordered_map<long long,int>mp;
        long long sum=0,ans=0;
        solve(root,target,sum,ans,mp);
        return ans;
    }
};