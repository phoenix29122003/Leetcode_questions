
class Solution {
public:
    int solve(TreeNode *root,int &ans)
    {
        if(!root) return 0;
        if(ans==false) return 0;
        int l=solve(root->left,ans);
        int r=solve(root->right,ans);
        if(abs(r-l)>1) ans=false;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        int ans=true;
        solve(root,ans);
        return ans;
    }
};