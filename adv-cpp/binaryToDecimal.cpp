#include<iostream>
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

    int binary=1;
    while(n>0)
    {
        int rem=n%2;
        binary=binary*10+rem;
        n/=2;
    }
    return binary;
}
int main()
{
    int n;
    cout<<"Enter decimal ";
    cin>>n;
    cout<<convertDecimalToBinary(n);
    return 0;
}
