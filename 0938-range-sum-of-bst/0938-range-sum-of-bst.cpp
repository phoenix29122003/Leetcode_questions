class Solution {
public:
    void solve(TreeNode *root,int low,int high,int &ans){
        if(root==NULL) return;
        solve(root->left,low,high,ans);
        if(low<=root->val && root->val<=high) ans+=root->val;
        solve(root->right,low,high,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        solve(root,low,high,ans);
        return ans;
    }
};