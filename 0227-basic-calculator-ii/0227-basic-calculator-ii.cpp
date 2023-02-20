class Solution {
public:
    int calculate(string s) {
        auto precedence=[](char c){return c=='*' || c=='/';};
        stack<char>op;
        stack<int>num;
        int cur=0;
        s+='#';
        for(char ch:s)
        {
            if(ch==' ') continue;
            else if(isdigit(ch)) cur=cur*10+(ch-'0');
            else
            {
                num.push(cur);
                while(size(op) && precedence(ch)<=precedence(op.top()))
                {
                    int num1=num.top();
                    num.pop();
                    int num2=num.top();
                    num.pop();
                    char opr=op.top();
                    op.pop();
                    if(opr=='*') num.push(num1*num2);
                    else if(opr=='/') num.push(num2/num1);
                    else if(opr=='+') num.push(num1+num2);
                    else num.push(num2-num1);
                }
                op.push(ch);
                cur=0;
            }
        }
        return num.top();
    }
};