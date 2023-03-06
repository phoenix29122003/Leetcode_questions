class Solution {
public:
    void solve(TreeNode *root,int sum,vector<int>ds,vector<vector<int>>&ans)
    {
        if(!root) return;
        ds.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==sum) ans.push_back(ds);
        solve(root->left,sum-root->val,ds,ans);
        solve(root->right,sum-root->val,ds,ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(root,sum,ds,ans);
        return ans;
    }
};