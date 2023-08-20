class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        queue<Node*>q;
        q.push(root);
        while(q.size()){
            int n=q.size();
            for(int i=0;i<n;i++){
                auto curr=q.front();
                q.pop();
                if(n-i>=2){
                    auto next=q.front();
                    curr->next=next;
                }
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return root;
    }
};