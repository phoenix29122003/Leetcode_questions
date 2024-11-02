class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        queue<Node*>q;
        q.push(root);
        while(q.size()){
            int sz=q.size();
            Node *prev=NULL;
            for(int i=sz-1;i>=0;i--){
                Node *curr=q.front();
                q.pop();
                if(prev) curr->next=prev;
                prev=curr;
                if(curr->right) q.push(curr->right);
                if(curr->left) q.push(curr->left);
            }
        }
        return root;
    }
};