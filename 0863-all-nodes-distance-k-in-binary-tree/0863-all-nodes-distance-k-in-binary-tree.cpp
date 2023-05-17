class Solution {
public:
    map<TreeNode*,TreeNode*>mp;
    vector<int>ans;
    set<TreeNode*>set;
    void dfs(TreeNode *node,int k)
    {
        if(set.find(node)!=set.end()) return;
        set.insert(node);
        if(k==0)
        {
            ans.push_back(node->val);
            return;
        }
        if(node->left) dfs(node->left,k-1);
        if(node->right) dfs(node->right,k-1);
        TreeNode *p=mp[node];
        if(p) dfs(p,k-1);
    }
    void findparent(TreeNode* root)
    {
        if(root==NULL) return;
        if(root->left) mp[root->left]=root,findparent(root->left);
        if(root->right) mp[root->right]=root,findparent(root->right);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(root==NULL) return {};
        findparent(root);
        dfs(target,k);
        return ans;
    }
};