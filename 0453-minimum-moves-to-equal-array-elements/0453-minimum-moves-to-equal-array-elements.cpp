class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=INT_MAX,ans=0;
        for(auto it:nums) mini=min(mini,it);
        for(auto it:nums) ans+=it-mini;
        return ans;
    }
};