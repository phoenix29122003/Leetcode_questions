class Solution {
public:
    void solve(TreeNode *root,int &pref)
    {
        if(root==NULL) return;
        solve(root->right,pref);
        root->val+=pref;
        pref=root->val;
        solve(root->left,pref);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int pref=0;
        solve(root,pref);
        return root;
    }
};