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
int main()
{
    int n;
    cout<<"Enter decimal ";
    cin>>n;
    cout<<convertDecimalToBinary(n);
    return 0;
}
