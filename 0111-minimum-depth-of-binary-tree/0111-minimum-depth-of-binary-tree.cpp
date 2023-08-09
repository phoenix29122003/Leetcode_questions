class Solution {
public:
    void solve(TreeNode *root,int cnt,int &ans){
        if(root==NULL) return;
        cnt++;
        if(root->left==NULL && root->right==NULL) ans=min(ans,cnt);
        solve(root->left,cnt,ans);
        solve(root->right,cnt,ans);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=INT_MAX;
        solve(root,0,ans);
        return ans;
    }
};