class Solution {
public:
    vector<TreeNode*>ans;
    set<int>dp;
    void solve(TreeNode* &root)
    {
        if(root!=NULL)
        {
            solve(root->left);
            solve(root->right);
            if(dp.find(root->val)!=dp.end())
            {
                if(root->left)  ans.push_back(root->left);
                if(root->right) ans.push_back(root->right);
                root=NULL;
				delete root;
            }
        }
    }
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(int i=0;i<to_delete.size();i++) dp.insert(to_delete[i]);
        solve(root);
        if(root) ans.push_back(root);
        return ans;
    }
};