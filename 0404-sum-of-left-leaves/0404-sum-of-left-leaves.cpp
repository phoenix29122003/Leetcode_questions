class Solution {
public:
    int solve(TreeNode *root,int &sum,bool chk)
    {
        if(!root) return 0;
        solve(root->left,sum,true);
        solve(root->right,sum,false);
        if(root->left==NULL && root->right==NULL && chk==true) sum+=root->val;
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        bool chk=false;
        int sum=0;
        solve(root,sum,chk);
        return sum;
    }
};