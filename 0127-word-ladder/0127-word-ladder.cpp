class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>set(wordList.begin(),wordList.end());
        queue<string>q;
        if(set.find(endWord)==set.end()) return 0;
        q.push(beginWord);
        int ladder=1;
        while(q.size()){
            int sz=q.size();
            while(sz--){
                string node=q.front();
                q.pop();
                if(node==endWord) return ladder;
                for(int i=0;i<node.length();i++){
                    char chr=node[i];
                    for(char ch='a';ch<='z';ch++){
                        if(ch==chr) continue;
                        node[i]=ch;
                        if(set.find(node)!=set.end()){
                            set.erase(node);
                            q.push(node);
                        }
                    }
                    node[i]=chr;
                }
            }
            ladder++;
        }
        return 0;
    }
};