class Solution {
public:
    void solve(TreeNode *root,string ds,vector<string>&ans)
    {
        if(root==NULL) return;
        if(root->left||root->right) ds+=to_string(root->val)+"->";
        else 
        {
            ds+=to_string(root->val);
            ans.push_back(ds);
        }
        solve(root->left,ds,ans);
        solve(root->right,ds,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string ds="";
        solve(root,ds,ans);
        return ans;
    }
};