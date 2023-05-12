class Solution {
public:
    int caldis(int x1,int y1,int x2,int y2)
    {
        return abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>>points={p1,p2,p3,p4};
        unordered_set<int>set;
        for(int i=0;i<points.size();i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                int dist=caldis(points[i][0],points[i][1],points[j][0],points[j][1]);
                if(dist) set.insert(dist);
                else return false;
            }
        }
        return set.size()==2;
    }
};