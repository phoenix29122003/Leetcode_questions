class Solution {
public:
    int ans=0;
    void solve(TreeNode *root,int currmax)
    {
        if(!root) return;
        if(root->val>=currmax)
        {
            ans++;
            currmax=root->val;
        }
        solve(root->left,currmax);
        solve(root->right,currmax);
    }
    int goodNodes(TreeNode* root) {
        solve(root,root->val);
        return ans;
    }
};