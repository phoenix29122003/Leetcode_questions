class Solution {
public:
    int ans=0;
    unordered_map<long,int>mp;
    void solve(TreeNode *root,int target,long sum)
    {
        if(root==NULL) return;
        sum+=root->val;
        if(sum==target) ans++;
        if(mp.find(sum-target)!=mp.end()) ans+=mp[sum-target];
        mp[sum]++;
        solve(root->left,target,sum);
        solve(root->right,target,sum);
        mp[sum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        solve(root,targetSum,0);
        return ans;
    }
};