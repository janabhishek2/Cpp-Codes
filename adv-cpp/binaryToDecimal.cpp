#include<iostream>
#include<cmath>
using namespace std;
int convertBinaryToDecimal( int binary )
{
    int decimal=0;
    int multiplier=1;
    while(binary)
    {
        int temp=binary%10;
        decimal+=temp*multiplier;
        multiplier*=2;
        binary/=10;
    }
    return decimal;
}
int convertDecimalToBinary(int n)
{

    int ans=0;
    int i=0;
    while(n>0)
    {
        int rem=n%2;
        ans=ans+rem*pow(10,i);
        i++;
        n/=2;
    }
    return ans;
}
string stringReverse(string str)
{

    int start=0;
    int end=str.length()-1;
    while(start<=end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;
}
string convertDecimalToHex(int n)
{
    string ans ="";
    while(n>0)
    {
        int rem=n%16;
        if(rem<=9)
        {
            ans+=char(48+rem);
        }
        else
        {
            ans+=char(55+rem);
        }
        n/=16;
    }
    return stringReverse(ans);
}
int main()
{

    return 0;
}
