class Solution {
public:
    int solve(TreeNode *root,unordered_map<TreeNode*,int>&dp){
        if(root==NULL) return 0;
        if(dp.find(root)!=dp.end()) return dp[root];
        int take=root->val;
        if(root->left) take+=solve(root->left->left,dp)+solve(root->left->right,dp);
        if(root->right) take+=solve(root->right->left,dp)+solve(root->right->right,dp);
        int not_take=solve(root->left,dp)+solve(root->right,dp);
        return dp[root]=max(take,not_take);
    }
    int rob(TreeNode* root) {
        unordered_map<TreeNode*,int>dp;
        return solve(root,dp);
    }
};