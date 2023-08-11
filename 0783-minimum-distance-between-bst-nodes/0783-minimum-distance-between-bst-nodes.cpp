class Solution {
public:
    int pre;
    void solve(TreeNode *root,int &ans){
        if(root==NULL) return;
        solve(root->left,ans);
        if(pre!=-1) ans=min(ans,root->val-pre);
        pre=root->val;
        solve(root->right,ans);
    }
    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX;
        pre=-1;
        solve(root,ans);
        return ans;
    }
};