class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int lv=0;
        while(!q.empty()) 
        {
            int sz=q.size(),prev=lv%2==0?0:INT_MAX;
            while(sz--)
            {
                auto node=q.front();
                q.pop();
                if(lv%2==0) 
                {
                    if(node->val%2==0 || node->val<=prev) return false;
                } 
                else
                {
                    if(node->val%2==1 || node->val>=prev) return false;
                }
                prev=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            lv++;
        }
        return true;
    }
};