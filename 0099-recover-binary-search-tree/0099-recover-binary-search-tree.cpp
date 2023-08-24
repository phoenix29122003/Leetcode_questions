class Solution {
public:
    TreeNode *first=NULL,*second=NULL,*prev=NULL;
    void solve(TreeNode *root){
        if(root==NULL) return;
        solve(root->left);
        if(prev && prev->val>root->val){
            if(first==NULL) first=prev;
            second=root;
        }
        prev=root;
        solve(root->right);
    }
    void recoverTree(TreeNode* root) {
        solve(root);
        int dum=first->val;
        first->val=second->val;
        second->val=dum;
    }
};