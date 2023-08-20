class Solution {
public:
    bool solve(TreeNode* node,TreeNode* &prev) {
        if(node==NULL) return true;
        if(!solve(node->left,prev)) return false;
        if(prev!=NULL && prev->val>=node->val) return false;
        prev=node;
        return solve(node->right,prev);
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return solve(root, prev);
    }
};