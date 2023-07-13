class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& qs) {
        vector<int>ans;
        int sum=0;
        for(auto it:A) if(it%2==0) sum+=it;
        for(auto &q:qs)
        {
            if(A[q[1]]%2==0) sum-=A[q[1]];
            A[q[1]]+=q[0];
            if(A[q[1]]%2==0) sum+=A[q[1]];
            ans.push_back(sum);
        }
        return ans;
    }
};