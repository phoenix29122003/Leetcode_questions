class Solution {
public:
    TreeNode* solve(vector<int>& nums,int l,int r){
        if(l>r)return NULL;
        int max_index=l;
        for(int i=l;i<=r;i++) if(nums[i]>nums[max_index]) max_index=i; 
        TreeNode* root=new TreeNode(nums[max_index]);
        root->left=solve(nums,l,max_index-1);
        root->right=solve(nums,max_index+1,r);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};