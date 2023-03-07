class Solution {
public:
    void solve(TreeNode *root,vector<string>&ans,string curr)
    {
        if(!root) return;
        if(root->left || root->right) curr+=to_string(root->val)+"->";
        else
        {
            curr+=to_string(root->val);
            ans.push_back(curr);
        }
        solve(root->left,ans,curr);
        solve(root->right,ans,curr);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string curr="";
        solve(root,ans,curr);
        return ans;
    }
};