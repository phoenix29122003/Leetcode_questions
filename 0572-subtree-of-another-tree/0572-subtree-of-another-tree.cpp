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
    bool solve(TreeNode* m, TreeNode* t)
    {
        if(m==NULL || t==NULL) return m==t;
        return (m->val==t->val) && solve(m->left,t->left) && solve(m->right,t->right);
    }
    bool isSubtree(TreeNode* m, TreeNode* t) {
        return solve(m,t)||(m->left && isSubtree(m->left,t)||(m->right && isSubtree(m->right,t)));
    }
};