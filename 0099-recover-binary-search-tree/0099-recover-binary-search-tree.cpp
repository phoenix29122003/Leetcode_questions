class Solution {
public:
    vector<pair<TreeNode*,TreeNode*>>vec;
    TreeNode *prev=NULL;
    void solve(TreeNode* root)
    {
        if(!root) return;
        solve(root->left);
        if(prev && prev->val>root->val) vec.push_back({prev,root});
        prev=root;
        solve(root->right);
    }
    void recoverTree(TreeNode* root) {
        solve(root);
        if(vec.size()==2) swap(vec[0].first->val,vec[1].second->val);
        if(vec.size()==1) swap(vec[0].first->val,vec[0].second->val);
    }
};