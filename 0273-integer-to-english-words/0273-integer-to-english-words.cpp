class Solution {
public:
    string one[19]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};

    string ten[8]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    
    string solve(int n)
    {
        if(n>=1000000000) return solve(n/1000000000)+" Billion"+solve(n%1000000000);
        if(n>=1000000) return solve(n/1000000)+" Million"+solve(n%1000000);
        if(n>=1000) return solve(n/1000)+" Thousand"+solve(n%1000);
        if(n>=100) return solve(n/100)+" Hundred"+solve(n%100);
        if(n>=20) return " "+ten[n/10-2]+solve(n%10);
        if(n>=1) return " "+one[n-1];
        return "";
    }
    
    string numberToWords(int num) {
        if(num==0) return "Zero";
        return solve(num).substr(1);
    }
};