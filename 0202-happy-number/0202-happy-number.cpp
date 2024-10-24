class Solution {
public:
    int sumOfSquare(int n){
        int ans=0;
        while(n){
            ans+=(n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        if(n==1) return true;
        unordered_set<int>set;
        int nextNum=n;
        while(n!=1 && set.find(nextNum)==set.end()){
            cout<<"nextNum: "<<nextNum<<endl;
            set.insert(nextNum);
            nextNum=sumOfSquare(nextNum);
            if(nextNum==1) return true;
        }
        return false;
    }
};