class Solution {
public:
    void solve(TreeNode*&root,unordered_set<int>&set,vector<TreeNode*>&ans)
    {
        if(root==NULL) return;
        solve(root->left,set,ans);
        solve(root->right,set,ans);
        if(set.find(root->val)!=set.end())
        {
            if(root->left) ans.push_back(root->left);
            if(root->right) ans.push_back(root->right);
            root=NULL;
            delete root;
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int>set;
        for(int it:to_delete) set.insert(it);
        vector<TreeNode*>ans;
        solve(root,set,ans);
        if(root) ans.push_back(root);
        return ans;
    }
};