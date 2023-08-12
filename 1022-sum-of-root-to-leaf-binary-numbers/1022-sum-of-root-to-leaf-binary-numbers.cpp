class Solution {
public:
    int convertor(string str){
        int dec_num = 0;
        int power = 0 ;
        int n = str.length() ;
        for(int i = n-1 ; i>=0 ; i--){
            if(str[i] == '1'){
                dec_num += (1<<power) ;
            }
                power++ ;
        }
        return dec_num;
    }
    void solve(TreeNode *root,string s,int &ans){
        if(root==NULL) return;
        s+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            ans+=convertor(s);
        }
        solve(root->left,s,ans);
        solve(root->right,s,ans);
    }
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        solve(root,"",ans);
        return ans;
    }
};