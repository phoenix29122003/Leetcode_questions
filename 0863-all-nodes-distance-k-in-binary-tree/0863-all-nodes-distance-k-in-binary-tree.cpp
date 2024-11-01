class Solution {
public:
    void solve(TreeNode *root,TreeNode *target,int k,unordered_map<TreeNode*,TreeNode*>&mp,unordered_set<TreeNode*>&set,vector<int>&ans){
        if(target==NULL) return;
        if(set.find(target)!=set.end()) return;
        else set.insert(target);
        if(k==0){
            ans.push_back(target->val);
            return;
        }
        solve(root,mp[target],k-1,mp,set,ans);
        solve(root,target->left,k-1,mp,set,ans);
        solve(root,target->right,k-1,mp,set,ans);
    }
    void trace_parent(TreeNode *root,TreeNode *parent,unordered_map<TreeNode*,TreeNode*>&mp){
        if(root==NULL) return;
        mp[root]=parent;
        trace_parent(root->left,root,mp);
        trace_parent(root->right,root,mp);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        unordered_map<TreeNode*,TreeNode*>mp;
        unordered_set<TreeNode*>set;
        trace_parent(root,NULL,mp);
        solve(root,target,k,mp,set,ans);
        return ans;
    }
};