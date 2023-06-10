class Solution {
public:
    pair<int,int> parse(string s)
    {
        int i=s.find('+');
        int real=stoi(s.substr(0,i));
        int img=stoi(s.substr(i+1,s.length()-1-i-1));
        pair<int,int>ans(real,img);
        return ans;
    }
    string complexNumberMultiply(string num1, string num2) {
        pair<int,int>a=parse(num1),b=parse(num2);
        int reala=a.first,realb=b.first,imga=a.second,imgb=b.second;
        return to_string(reala*realb-imga*imgb)+'+'+to_string(imga*realb+imgb*reala)+'i';
    }
};