
#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    while(n>=1)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}
int NCR(int n,int r)
{
    return (factorial(n))/(factorial(r)*factorial(n-r));
}
void printPascalTriangle(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<NCR(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    printPascalTriangle(n);
    return 0;
}
