class Solution {
public:
    void solve(TreeNode *root,int left,int &ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL && left) ans+=root->val;
        solve(root->left,1,ans);
        solve(root->right,0,ans);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        solve(root,0,ans);
        return ans;
    }
};