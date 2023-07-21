class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>deadset(deadends.begin(),deadends.end());
        unordered_set<string>visited;
        int ans=0;
        if(deadset.find("0000")!=deadset.end()) return -1;
        queue<string>q;
        q.push("0000");
        visited.insert("0000");
        while(q.size())
        {
            int n=q.size();
            while(n--)
            {
                string up,down,curr=q.front();
                q.pop();
                if(curr==target) return ans;
                for(int i=0;i<4;i++)
                {
                    up=down=curr;
                    char upch=up[i],downch=down[i];
                    up[i]=(upch=='9'?'0':upch+1);
                    down[i]=(downch=='0'?'9':downch-1);
                    if(visited.find(up)==visited.end() && deadset.find(up)==deadset.end())
                    {
                        q.push(up);
                        visited.insert(up);
                    }
                    if(visited.find(down)==visited.end() && deadset.find(down)==deadset.end())
                    {
                        q.push(down);
                        visited.insert(down);
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};