class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        map<int,int>mp;
        queue<TreeNode*>q;
        q.push(root);
        int h=0,maxi=INT_MIN;
        while(q.size()){
            h++;
            int sum=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                auto curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            mp[h]=sum;
            maxi=max(sum,maxi);
        }
        for(auto it:mp){
            if(it.second==maxi) return it.first;
        } 
        return 0;
    }
};