class Solution {
public:
    int subtreesum(TreeNode *root){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->val;
        int left=subtreesum(root->left);
        int right=subtreesum(root->right);
        root->val=root->val+left+right;
        return root->val;
    }
    void cntfreq(TreeNode *root,unordered_map<int,int>&mp){
        if(root==NULL) return;
        mp[root->val]++;
        cntfreq(root->left,mp);
        cntfreq(root->right,mp);
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        subtreesum(root);
        vector<int>ans;
        unordered_map<int,int>mp;
        cntfreq(root,mp);
        int grtfreq=0;
        for(auto it:mp) grtfreq=max(grtfreq,it.second);
        for(auto it:mp) if(it.second==grtfreq) ans.push_back(it.first);
        return ans;
    }
};