class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>set;
        int n=nums.size();
        for(auto it:nums) set.insert(it);
        for(int i=0;i<=n;i++) if(set.find(i)==set.end()) return i;
        return 0;
    }
};