/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode *root,vector<int>&vec){
        if(root==NULL) return;
        solve(root->left,vec);
        vec.push_back(root->val);
        solve(root->right,vec);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL) return NULL;
        vector<int>vec;
        solve(root,vec);
        int i=1,n=vec.size();
        TreeNode *head=new TreeNode(vec[0]);
        TreeNode *dum=head;
        while(i<n){
            dum->right=new TreeNode(vec[i++]);
            dum=dum->right;
        }
        return head;
    }
};