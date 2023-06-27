class CBTInserter {
public:
    TreeNode *_root=NULL;
    CBTInserter(TreeNode* root) {
        _root=root;
    }
    
    int insert(int val) {
        queue<TreeNode*>q;
        q.emplace(_root);
        TreeNode *curr=NULL;
        while(q.size())
        {
            curr=q.front();
            q.pop();
            if(curr->left==NULL) 
            {
                curr->left=new TreeNode(val);
                break;
            }
            if(curr->right==NULL)
            {
                curr->right=new TreeNode(val);
                break;
            }
            if(curr->left) q.emplace(curr->left);
            if(curr->right) q.emplace(curr->right);
        }
        return curr->val;
    }
    
    TreeNode* get_root() {
        return _root;
    }
};