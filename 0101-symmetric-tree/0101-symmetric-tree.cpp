class Solution {
public:
    bool solve(TreeNode *left,TreeNode *right)
    {
        if(left==NULL && right==NULL) return true;
        else if(left==NULL || right==NULL || left->val!=right->val) return false;
        return solve(left->left,right->right)&&solve(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return solve(root->left,root->right);
    }
};