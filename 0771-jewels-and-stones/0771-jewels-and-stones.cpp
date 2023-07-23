class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        unordered_set<char>set;
        for(int i=0;i<jewels.length();i++) set.insert(jewels[i]);
        for(int j=0;j<stones.size();j++) if(set.find(stones[j])!=set.end()) ans++;
        return ans;
    }
};