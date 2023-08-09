class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        TreeNode *leftptr=invertTree(root->left);
        TreeNode *rightptr=invertTree(root->right);
        root->left=rightptr;
        root->right=leftptr;
        return root;
    }
};