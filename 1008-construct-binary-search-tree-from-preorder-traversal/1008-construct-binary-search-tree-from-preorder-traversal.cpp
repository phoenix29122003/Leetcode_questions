class Solution {
public:
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& rootIdx, int left, int right)     {
        if(left>right) return NULL;
        int pivot=left;  
        while(inorder[pivot]!=preorder[rootIdx]) pivot++;
        rootIdx++;
        TreeNode* newNode=new TreeNode(inorder[pivot]);
        newNode->left=build(preorder,inorder,rootIdx,left,pivot-1);
        newNode->right=build(preorder,inorder,rootIdx,pivot+1,right);
        return newNode;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>inorder;
        for(int it:preorder) inorder.push_back(it);
        sort(inorder.begin(),inorder.end());
        int rootIdx = 0;
        return build(preorder, inorder, rootIdx, 0, inorder.size()-1);
    }
};