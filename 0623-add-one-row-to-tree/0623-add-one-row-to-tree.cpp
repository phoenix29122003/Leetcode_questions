class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode *newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        queue<TreeNode*>q;
        q.push(root);
        int cnt=0;
        while(q.size())
        {
            cnt++;
            int n=q.size();
            while(n--)
            {
                TreeNode *curr=q.front();
                q.pop();
                if(cnt!=depth-1)
                {
                    if(curr->left) q.push(curr->left);
                    if(curr->right) q.push(curr->right);
                }
                else
                {
                    TreeNode *newNode1=new TreeNode(val);
                    newNode1->left=curr->left;
                    curr->left=newNode1;
                    TreeNode *newNode2=new TreeNode(val);
                    newNode2->right=curr->right;
                    curr->right=newNode2;
                }
            }
        }
        return root;
    }
};