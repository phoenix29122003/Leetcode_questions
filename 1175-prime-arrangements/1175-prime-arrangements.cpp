class Solution {
public:
    int numPrimeArrangements(int n) {
        if(n==1){
            return 1;
        }
        vector<int> arr(n+1,1);
        arr[0] = 0;
        arr[1] = 0;
        int count = 0;
        for(int i = 2; i<=sqrt(n); i++){
            for(int j = i*i; j<=n; j+=i){
                if(arr[j]==1){
                    arr[j] = 0;
                }
            }
        }

        for(int i = 0; i<arr.size(); i++){
            if(arr[i]==1){
                count++;
            }
        }
        long long int answer = 1;
        int reverse = n - count;

        while(reverse!=1){
            answer = answer*reverse%1000000007;
            answer%1000000007;
            reverse--;
        }
        while(count!=1){
            answer = answer*count%1000000007;
            answer%1000000007;
            count--;
        }
        return answer;
    }
};