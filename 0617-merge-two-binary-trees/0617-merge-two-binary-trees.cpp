class Solution {
public:
    TreeNode* solve(TreeNode *root1,TreeNode *root2){
        if(root1==NULL && root2==NULL) return NULL;
        if(root1==NULL) return root2;
        if(root2==NULL) return root1;
        int val1=root1?root1->val:0;
        int val2=root2?root2->val:0;
        TreeNode *root=new TreeNode(val1+val2);
        root->left=solve(root1->left,root2->left);
        root->right=solve(root1->right,root2->right);
        return root;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return solve(root1,root2);
    }
};