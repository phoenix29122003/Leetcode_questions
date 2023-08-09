class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n%2){
            ans.push_back(0);
            int i=1;
            n--;
            while(n){
                ans.push_back(i);
                ans.push_back(-i);
                i++;
                n=n-2;
            }
        }
        else {
            int i=1;
            while(n){
                ans.push_back(i);
                ans.push_back(-i);
                i++;
                n=n-2;
            }
        }
        return ans;
    }
};