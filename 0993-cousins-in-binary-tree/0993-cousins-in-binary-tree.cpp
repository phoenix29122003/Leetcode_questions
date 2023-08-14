class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*,TreeNode*>>q;
        TreeNode *parent;
        q.push({root,NULL});
        while(q.size()){
            int f=0;
            int n=q.size();
            while(n--){
                auto curr=q.front();
                q.pop();
                if(curr.first->val==x || curr.first->val==y){
                    if(f==0){
                        parent=curr.second;
                        f=1;
                    }
                    else if(f==1){
                        if(curr.second!=parent) return true;
                    }
                } 
                if(curr.first->left) q.push({curr.first->left,curr.first});
                if(curr.first->right) q.push({curr.first->right,curr.first});
            }
        }
        return false;
    }
};