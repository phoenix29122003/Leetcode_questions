class Solution {
public:
    bool solve(TreeNode *root,long maxi,long mini){
        if(root==NULL) return true;
        if(maxi<=root->val || root->val<=mini) return false;
        return solve(root->left,root->val,mini)&&solve(root->right,maxi,root->val);
    }
    bool isValidBST(TreeNode* root) {
        return solve(root,LONG_MAX,LONG_MIN);
    }
};