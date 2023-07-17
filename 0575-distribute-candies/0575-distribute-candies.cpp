class Solution {
public:
    int distributeCandies(vector<int>& cd) {
        return min(set<int>(cd.begin(),cd.end()).size(),cd.size()/2);
    }
};