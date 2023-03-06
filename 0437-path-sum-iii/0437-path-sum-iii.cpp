class Solution {
public:
    unordered_map<long,int>mp;
    int ans=0;
    void solve(TreeNode *root,int target,long sum)
    {
        if(!root) return;
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