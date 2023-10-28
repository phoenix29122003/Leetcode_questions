class Solution {
public:
    pair<int,int>solve(string s){
        int i=s.find('+');
        int n=s.length();
        int real=stoi(s.substr(0,i));
        int img=stoi(s.substr(i+1,n-i-2));
        return {real,img};
    }
    string complexNumberMultiply(string num1, string num2) {
        auto n1=solve(num1),n2=solve(num2);
        int real1=n1.first,img1=n1.second,real2=n2.first,img2=n2.second;
        string ans=to_string(real1*real2-img1*img2)+"+"+to_string(real1*img2+real2*img1)+"i";
        return ans;
    }
};