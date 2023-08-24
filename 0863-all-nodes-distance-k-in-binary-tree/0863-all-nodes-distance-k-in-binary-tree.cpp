class Solution {
public:
    unordered_map<TreeNode*,TreeNode*>mp;
    unordered_set<TreeNode*>set;
    vector<int>ans;
    void parentmapping(TreeNode *root,TreeNode *parent){
        if(root==NULL) return;
        mp[root]=parent;
        parentmapping(root->left,root);
        parentmapping(root->right,root);
    }
    void solve(TreeNode *root,TreeNode *node,int k){
        if(node==NULL) return;
        if(set.find(node)!=set.end()) return;
        else set.insert(node);
        if(k==0){
            ans.push_back(node->val);
            return;
        }
        solve(root,mp[node],k-1);
        solve(root,node->left,k-1);
        solve(root,node->right,k-1);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        parentmapping(root,NULL);
        solve(root,target,k);
        return ans;
    }
};