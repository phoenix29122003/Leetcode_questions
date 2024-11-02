class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        long long ans=0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        while(q.size()){
            int sz=q.size();
            long long minIdx=q.front().second;
            long long first=-1,second=-1;
            for(int i=0;i<sz;i++){
                auto curr=q.front();
                TreeNode *currNode=curr.first;
                long long idx=curr.second-minIdx;
                q.pop();
                if(i==0) first=idx;
                if(i==sz-1) second=idx;
                if(first!=-1 && second!=-1) ans=max(ans,second-first+1);
                if(currNode->left) q.push({currNode->left,2*idx+1});
                if(currNode->right) q.push({currNode->right,2*idx+2});
            }
        }
        return ans;
    }
};