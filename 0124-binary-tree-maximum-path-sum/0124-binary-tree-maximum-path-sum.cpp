class Solution {
public:
    int solve(TreeNode *root,int &ans)
    {
        if(root==NULL) return 0;
        int left=max(solve(root->left,ans),0);
        int right=max(solve(root->right,ans),0);
        ans=max(ans,root->val+left+right);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        solve(root,ans);
        return ans;
    }
};