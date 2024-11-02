class Solution {
public:
    int solve(TreeNode *root,int &ans){
        if(root==NULL) return 0;
        int lm=max(solve(root->left,ans),0);
        int rm=max(solve(root->right,ans),0);
        ans=max(ans,lm+rm+root->val);
        return root->val+max(lm,rm);
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        solve(root,ans);
        return ans;
    }
};