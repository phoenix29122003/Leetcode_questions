class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(i==sz-1) ans.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return ans;
    }
};