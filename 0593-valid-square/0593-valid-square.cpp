class Solution {
public:
    int cal(vector<int>p1,vector<int>p2){
        return (abs(p1[0]-p2[0]))*(abs(p1[0]-p2[0]))+(abs(p1[1]-p2[1]))*(abs(p1[1]-p2[1]));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int>set;
        set.insert(cal(p1,p2));
        set.insert(cal(p1,p4));
        set.insert(cal(p1,p3));
        set.insert(cal(p3,p2));
        set.insert(cal(p3,p4));
        set.insert(cal(p2,p4));
        return !set.count(0) && set.size()==2;
    }
};