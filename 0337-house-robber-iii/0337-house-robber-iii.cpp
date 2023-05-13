class Solution {
public:
    unordered_map<TreeNode*,int>mp;
    int rob(TreeNode* root) {
        if(!root) return 0;
        if(mp.find(root)!=mp.end()) return mp[root];
        int nottake=rob(root->left)+rob(root->right);
        int take=root->val;
        if(root->left) take+=rob(root->left->left)+rob(root->left->right);
        if(root->right) take+=rob(root->right->left)+rob(root->right->right);
        return mp[root]=max(take,nottake);
    }
};