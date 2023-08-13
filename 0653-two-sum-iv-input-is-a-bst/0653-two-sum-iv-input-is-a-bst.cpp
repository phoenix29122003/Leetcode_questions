class Solution {
public:
    void solve(TreeNode *root,vector<int>&vec){
        if(root==NULL) return;
        solve(root->left,vec);
        vec.push_back(root->val);
        solve(root->right,vec);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>vec;
        solve(root,vec);
        int i=0,j=vec.size()-1;
        while(i<j){
            if(vec[i]+vec[j]==k) return true;
            else if(vec[i]+vec[j]<k) i++;
            else j--;
        }
        return false;
    }
};