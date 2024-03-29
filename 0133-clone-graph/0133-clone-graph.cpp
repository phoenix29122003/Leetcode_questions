/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

unordered_map<Node*,Node*>mp;
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        Node* root=new Node(node->val);
        mp[node]=root;
        queue<Node*>q;
        q.push(node);
        while(q.size()){
            Node *curr=q.front();
            q.pop();
            for(auto it:curr->neighbors){
                if(mp.find(it)==mp.end()){
                    mp[it]=new Node(it->val,{});
                    q.push(it);
                }
                mp[curr]->neighbors.push_back(mp[it]);
            }
        }
        return mp[node];
    }
};