class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string curr="";
        int n=s.length();
        int j=0,i=0;
        while(i<n && j<n){
            if(s[j]==' '){
                cout<<"curr: "<<curr<<endl;
                if(ans.length()==0) ans=curr;
                else if(curr.length()) ans=curr+" "+ans;
                curr="";
                i=j+1;
                j++;
            }
            else{
                curr+=s[j];
                j++;
            }
        }
        if(curr.length() && ans.length()) ans=curr+" "+ans;
        else if(curr.length() && ans.length()==0) ans=curr;
        return ans;
    }
};