class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++) q.push(i);
        while(q.size()!=1){
            int x=k;
            while(x>1){
                int survived=q.front();
                q.pop();
                q.push(survived);
                x--;
            }
            q.pop();
        }
        return q.front();
    }
};

