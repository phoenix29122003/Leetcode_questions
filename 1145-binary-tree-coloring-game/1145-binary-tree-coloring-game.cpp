class Solution {
public:
    TreeNode* findNode(TreeNode* root,int x)
    {
        TreeNode* temp=NULL;
        if(root)
        {
            if(root->val==x) temp=root;
            else
            {
                temp=findNode(root->left,x);
                if(!temp) temp=findNode(root->right,x);
            }
        }
        return temp;
    }
    
    void countChildren(TreeNode* root, int &no)
    {
        if(root)
        {
            no++;
            countChildren(root->left,no);
            countChildren(root->right,no);    
        }
    }
    
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {    
        int left=0,right=0,parent=0,blue=0;
        TreeNode* temp=findNode(root,x);
        countChildren(temp->left,left); 
        countChildren(temp->right,right); 
        if(temp->val!=root->val) parent=n-(left+right+1);
        blue=max({left,right,parent});
        return (blue)>(n-blue);
    }
};