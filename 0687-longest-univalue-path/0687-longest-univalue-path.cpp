class Solution {
public:
    int solve(TreeNode *root,int &m){
        int l=root->left?solve(root->left,m):0;
        int r=root->right?solve(root->right,m):0;
        l=(root->left && root->left->val==root->val)?l+1:0;
        r=(root->right && root->right->val==root->val)?r+1:0;
        m=max(m,l+r);
        return max(l,r);
    }
    int longestUnivaluePath(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=0;
        solve(root,ans);
        return ans;
    }
};