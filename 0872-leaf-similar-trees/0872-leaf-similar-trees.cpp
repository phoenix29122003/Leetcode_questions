class Solution {
public:
    void solve(TreeNode *root,vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) {
            ans.push_back(root->val);
            return;
        }
        solve(root->left,ans);
        solve(root->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>vec1,vec2;
        solve(root1,vec1);
        solve(root2,vec2);
        return vec1==vec2;
    }
};