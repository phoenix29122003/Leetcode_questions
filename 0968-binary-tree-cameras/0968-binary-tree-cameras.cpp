class Solution {
public:
    int solve(TreeNode *root,int &ans)
    {
        if(root==NULL) return 1;
        int l=solve(root->left,ans);
        int r=solve(root->right,ans);
        if(l==0 || r==0) 
        {
            ans++;
            return 2;
        }
        if(l==2 || r==2) return 1;
        else return 0;
    }
    int minCameraCover(TreeNode* root) {
        int ans=0;
        if(solve(root,ans)==0) ans++;
        return ans;
    }
};