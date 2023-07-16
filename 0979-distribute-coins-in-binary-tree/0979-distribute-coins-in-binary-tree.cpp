class Solution {
public:
    int solve(TreeNode *root,int &ans)
    {
        if(root==NULL) return 0;
        int left=solve(root->left,ans),right=solve(root->right,ans);
        ans+=abs(left)+abs(right);
        return root->val+left+right-1;
    }
    int distributeCoins(TreeNode* root) {
        int ans=0;
        solve(root,ans);
        return ans;
    }
};