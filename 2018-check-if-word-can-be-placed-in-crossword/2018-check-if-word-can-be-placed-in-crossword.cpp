class Solution {
public:
    bool fit(vector<char>arr,int first,int last,string word){
        if((last-first+1)!=word.size()) return false;
        int i=0,n=word.length();
        while(i<n && (arr[first+i]==' ' || arr[first+i]==word[i])) i++;
        if(i==n) return true;
        i=0;
        while(i<n && (arr[last-i]==' ' || arr[last-i]==word[i])) i++;
        if(i==n) return true;
        return false;
    }
    bool match(vector<vector<char>>& mat,string word){
        int n=mat[0].size(),m=word.size();
        for(auto row:mat){
            for(int i=0;i<n;){
                while(i<n && row[i]=='#') i++;
                int start=i;
                while(i<n && row[i]!='#') i++;
                int last=i-1;
                if(fit(row,start,last,word)) return true;
            }
        }
        return false;
    }
    bool placeWordInCrossword(vector<vector<char>>& A, string word) {
        int m=A.size(),n=A[0].size();
        vector<vector<char>>B(n,vector<char>(m));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                B[j][i]=A[i][j];
            }
        }
        return match(A,word)||match(B,word);
    }
};