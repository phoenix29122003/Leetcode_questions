class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        map<int,map<int,multiset<int>>>mp;
        while(q.size()){
            int sz=q.size();
            while(sz--){
                TreeNode *curr=q.front().first;
                int x=q.front().second.first;
                int y=q.front().second.second;
                q.pop();
                mp[x][y].insert(curr->val);
                if(curr->left) q.push({curr->left,{x-1,y+1}});
                if(curr->right) q.push({curr->right,{x+1,y+1}});
            }
        }
        for(auto x:mp){
            vector<int>col;
            for(auto y:x.second){
                col.insert(col.end(),y.second.begin(),y.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};