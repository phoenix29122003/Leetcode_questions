class Solution {
public:
    int minChanges(int n, int k) {
        int ans=0;
        int bit_in_n=0, bit_in_k =0;
        while (n || k) {
            bit_in_n = n & 1;
            bit_in_k = k & 1;
            n >>= 1;
            k >>= 1;
            if(bit_in_n == bit_in_k) continue;
            else if(bit_in_n == 1 && bit_in_k==0) ans++;
            else if(bit_in_n == 0 && bit_in_k ==1) return -1;
        }
        return ans;
    }
};