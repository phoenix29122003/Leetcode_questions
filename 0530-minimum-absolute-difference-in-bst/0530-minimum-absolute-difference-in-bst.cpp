class Solution {
public:
    void solve(TreeNode *root,int &prev,int &ans){
        if(root==NULL) return;
        solve(root->left,prev,ans);
        if(prev==-1) prev=root->val;
        else{
            ans=min(ans,root->val-prev);
            prev=root->val;
        }
        solve(root->right,prev,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        int ans=INT_MAX,prev=-1;
        solve(root,prev,ans);
        return ans;
    }
};