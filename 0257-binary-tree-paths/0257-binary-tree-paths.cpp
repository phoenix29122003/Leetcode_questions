class Solution {
public:
    void solve(TreeNode *root,string ds,vector<string>&ans){
        if(root==NULL) return;
        else if(root->left==NULL && root->right==NULL){
            ds+=to_string(root->val);
            ans.push_back(ds);
            return;
        }
        ds+=to_string(root->val)+"->";
        solve(root->left,ds,ans);
        solve(root->right,ds,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        solve(root,"",ans);
        return ans;
    }
};