class Solution {
public:
    int rangeSumBST(TreeNode* root, int l, int h) {
        if(root==NULL) return 0;
        return (root->val<l || root->val>h?0:root->val)+rangeSumBST(root->left,l,h)+rangeSumBST(root->right,l,h);
    }
};