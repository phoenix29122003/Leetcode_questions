class Solution {
public:
    void solve(TreeNode *root,int target,vector<int>ds,vector<vector<int>>&ans)
    {
        if(root==NULL) return;
        ds.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==target)
        {
            ans.push_back(ds);
            return;
        }
        solve(root->left,target-root->val,ds,ans);
        solve(root->right,target-root->val,ds,ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(root,targetSum,ds,ans);
        return ans;
    }
};