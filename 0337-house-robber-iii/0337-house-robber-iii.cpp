class Solution {
public:
    unordered_map<TreeNode*,int>mp;
    int solve(TreeNode *root){
        if(root==NULL) return 0;
        if(mp.find(root)!=mp.end()) return mp[root];
        int pick,notpick;
        pick=root->val;
        if(root->left) pick+=solve(root->left->left)+solve(root->left->right);
        if(root->right) pick+=solve(root->right->left)+solve(root->right->right);
        notpick=solve(root->left)+solve(root->right);
        return mp[root]=max(pick,notpick);
    }
    int rob(TreeNode* root) {
        return solve(root);
    }
};