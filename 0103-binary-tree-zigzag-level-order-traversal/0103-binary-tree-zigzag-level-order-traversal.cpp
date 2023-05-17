class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int f=0;
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>ds;
            for(int i=0;i<sz;i++)
            {
                TreeNode *curr=q.front();
                q.pop();
                ds.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            if(f==1) reverse(ds.begin(),ds.end());
            ans.push_back(ds);
            f=!f;
        }
        return ans;
    }
};