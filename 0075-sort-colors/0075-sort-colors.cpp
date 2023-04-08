class Solution {
public:
    void sortColors(vector<int>& A) {
        int two=A.size()-1,zero=0;
        for(int i=0;i<=two;i++) 
        {
            while(A[i]==2 && i<two) swap(A[i],A[two--]);
            while(A[i]==0 && i>zero) swap(A[i], A[zero++]);
        }
    }
};