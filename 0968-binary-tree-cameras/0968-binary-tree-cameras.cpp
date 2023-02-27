class Solution {
public:
    int dfs(TreeNode* root,int &n)
    {
        if(!root) return 1;
        int l=dfs(root->left,n);
        int r=dfs(root->right,n);
        if(l==0 || r==0)
        {
            n++;
            return 2;
        } 
        else if(l==2 || r==2) return 1;
        else return 0;
    }
    int minCameraCover(TreeNode* root) {
        int n=0;
        if(dfs(root,n)==0) n++;
        return n;
    }
};