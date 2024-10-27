
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        if(root->left) invertTree(root->left);
        if(root->right) invertTree(root->right);
        TreeNode *leftChild=root->left;
        root->left=root->right;
        root->right=leftChild;
        return root;
    }
};