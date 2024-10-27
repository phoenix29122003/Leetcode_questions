class Solution {
public:
    int solve(TreeNode *root,bool &ans){
        if(root==NULL) return 0;
        int lh=solve(root->left,ans);
        int rh=solve(root->right,ans);
        if(abs(rh-lh)>1){
            ans=false;
            return -1;
        }
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        bool ans=true;
        solve(root,ans);
        return ans;
    }
};