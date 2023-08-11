class Solution {
public:
    void solve(TreeNode *root,unordered_map<int,int>&mp){
        if(root==NULL) return;
        mp[root->val]++;
        solve(root->left,mp);
        solve(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        unordered_map<int,int>mp;
        solve(root,mp);
        int mode=0;
        for(auto it:mp) mode=max(mode,it.second);
        for(auto it:mp) if(it.second==mode) ans.push_back(it.first);
        return ans;
    }
};