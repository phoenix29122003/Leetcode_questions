class CBTInserter {
public:
    TreeNode* root_=nullptr;
    CBTInserter(TreeNode* root) {
        root_=root;
    }
    int insert(int v) 
    {
        queue<TreeNode*>q;
        q.emplace(root_);
        TreeNode* curr=nullptr;
        while(!q.empty())
        {
            curr=q.front();
            q.pop();
            if(!curr->left) 
            {
                curr->left=new TreeNode(v);
                break;
            }
            if(!curr->right) 
            {
                curr->right=new TreeNode(v);
                break;
            }
            if(curr->left) q.emplace(curr->left);
            if(curr->right) q.emplace(curr->right);
        }
        return curr->val;
    }
    
    TreeNode* get_root() {
        return root_;
    }
};