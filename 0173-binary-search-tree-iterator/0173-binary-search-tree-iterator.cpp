class BSTIterator {
public:
    vector<int>inorder;
    int ptr;
    void solve(TreeNode *root){
        if(root==NULL) return;
        solve(root->left);
        inorder.push_back(root->val);
        solve(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder.push_back(0);
        ptr=0;
        solve(root);
        for(int i=0;i<inorder.size();i++) cout<<inorder[i]<<" ";
    }
    
    int next() {
        ptr=ptr+1;
        return inorder[ptr]; 
    }
    
    bool hasNext() {
        int a=ptr+1;
        return a<inorder.size();
    }
};

