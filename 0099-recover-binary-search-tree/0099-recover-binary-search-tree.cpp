class Solution {
public:
    void solve(TreeNode *root,TreeNode *&prev,TreeNode *&nodeOne,TreeNode *&nodeTwo){
        if(root==NULL) return;
        solve(root->left,prev,nodeOne,nodeTwo);
        if(prev && root->val<prev->val){
            if(nodeOne==NULL) nodeOne=prev;
            nodeTwo=root;
        }
        prev=root;
        solve(root->right,prev,nodeOne,nodeTwo);
    }
    void recoverTree(TreeNode* root) {
        TreeNode *nodeOne=NULL,*nodeTwo=NULL,*prev=NULL;
        solve(root,prev,nodeOne,nodeTwo);
        if (nodeOne && nodeTwo) {
            swap(nodeOne->val, nodeTwo->val);
        }
    }
};