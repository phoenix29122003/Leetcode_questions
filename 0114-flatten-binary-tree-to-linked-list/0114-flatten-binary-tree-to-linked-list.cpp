class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;
        flatten(root->left);
        flatten(root->right);
        TreeNode *tmp=root->right;
        root->right=root->left;
        root->left=nullptr;
        while(root->right) root=root->right;
        root->right=tmp;
    }
};