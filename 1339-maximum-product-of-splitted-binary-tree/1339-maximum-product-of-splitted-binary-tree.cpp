class Solution {
public:
    long long ans=0,totalsum=0;
    int dfs(TreeNode *root)
    {
        if(root==NULL) return 0;
        int currsum=dfs(root->left)+dfs(root->right)+root->val;
        ans=max(ans,(totalsum-currsum)*currsum);
        return currsum;
    }
    int maxProduct(TreeNode* root) {
        totalsum=dfs(root);
        dfs(root);
        return ans%int(1e9+7);
    }
};