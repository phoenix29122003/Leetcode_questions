class Codec {
public:
    string serialize(TreeNode* root) {
        if(!root) return "x,";
        else return to_string(root->val)+","+serialize(root->left)+serialize(root->right);
    }
    TreeNode* deserializehelper(queue<string> &q)
    {
        string s=q.front();
        q.pop();
        if(s=="x") return NULL;
        TreeNode *root=new TreeNode(stoi(s));
        root->left=deserializehelper(q);
        root->right=deserializehelper(q);
        return root;
    }
    TreeNode* deserialize(string data) {
        queue<string>q;
        string curr="";
        for(int i=0;i<data.size();i++)
        {
            if(data[i]==',')
            {
                q.push(curr);
                curr="";
            }
            else curr+=data[i];
        }
        if(curr.size()) q.push(curr);
        return deserializehelper(q);
    }
};