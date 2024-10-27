class Solution {
public:
    bool match(TreeNode *tree1,TreeNode *tree2){
        if(tree1==NULL && tree2==NULL) return true;
        if(tree1==NULL || tree2==NULL) return false;
        if(tree1->val!=tree2->val) return false;
        return match(tree1->left,tree2->left)&&match(tree1->right,tree2->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL || subRoot==NULL) return false;
        return match(root,subRoot)||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};