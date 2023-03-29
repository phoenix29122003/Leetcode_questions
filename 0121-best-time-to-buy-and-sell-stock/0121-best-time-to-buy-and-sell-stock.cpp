class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minrate=prices[0],maxrate=prices[0],ans=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            minrate=min(minrate,prices[i]);
            ans=max(ans,prices[i]-minrate);
        }
        return ans;
    }
};