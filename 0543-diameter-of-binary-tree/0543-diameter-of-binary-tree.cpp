class Solution {
public:
    int maxDepth(TreeNode* node)
    {
        if(!node) return 0;
        else 
        {
            int lDepth = maxDepth(node->left);
            int rDepth = maxDepth(node->right);
            if(lDepth>rDepth) return (lDepth+1);
            else return (rDepth+1);
        }
    }
    void solve(TreeNode *root,int &dm)
    {
        if(!root) return;
        int lmax=maxDepth(root->left);
        int rmax=maxDepth(root->right);
        dm=max(dm,lmax+rmax);
        solve(root->left,dm);
        solve(root->right,dm);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        solve(root,d);
        return d;
    }
};