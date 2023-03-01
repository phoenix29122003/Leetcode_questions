class Solution {
public:
    unordered_map<int, int> mp;
    TreeNode* build(vector<int>&in,vector<int>&post,int left,int right,int&ri)
    {
        if(left>right) return NULL;
        TreeNode* root=new TreeNode(post[ri--]);
        int pi=mp[root->val];
        root->right=build(in,post,pi+1,right,ri);
        root->left=build(in,post,left,pi-1,ri);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder,vector<int>& postorder)
    {
        for(int i=0;i<size(inorder);i++) mp[inorder[i]]=i;
        int n=size(inorder),postIdx=n-1;
        return build(inorder,postorder,0,n-1,postIdx);
    }
};