class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(auto it:deck) mp[it]++;   
        int gcdcnt=0;
        for(auto it:mp) gcdcnt=__gcd(gcdcnt,it.second) ;
        if(gcdcnt<=1) return false;
        return true;
    }
};