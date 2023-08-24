class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int ans=1;
        while(!q.empty())
        {
            int sz=q.size();
            ans=max(ans,q.back().second-q.front().second+1);
            for(int i=0;i<sz;i++)
            {
                pair<TreeNode*,int>p=q.front();
                q.pop();
                if(p.first->left) q.push({p.first->left,(long long)2*p.second+1});
                if(p.first->right) q.push({p.first->right,(long long)2*p.second+2});
            }
        }
        return ans;
    }
};