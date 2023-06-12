class Solution {
public:
    vector<int> getRow(int nr) {
        vector<vector<int>>ans;
        if(nr==1)
        {
            vector<int>temp;
            temp.push_back(1);
            temp.push_back(1);
            return temp;
        }
        vector<int>temp;
        temp.push_back(1);
        ans.push_back(temp);
        temp.push_back(1);
        ans.push_back(temp);
        for(int i=2;i<=nr;i++)
        {
            vector<int>temp1;
            temp1.push_back(1);
            for(int j=0;j<temp.size()-1;j++)
            {
                temp1.push_back(temp[j]+temp[j+1]);
            }
            temp1.push_back(1);
            ans.push_back(temp1);
            temp=temp1;
        }
        return ans[nr];
    }
};