
#include<iostream>
using namespace std;
int fibonacciUsingRecursion(int n){
if(n<2){
    return n;
}
else return fibonacciUsingRecursion(n-2)+fibonacciUsingRecursion(n-1);
}
void printFirstN(int n)
{
    if(n<=0)
    {
        return;
    }
    else
    {
        int a=0;
        int b=1;
        int c=a+b;
        if(n==1)
        {
            cout<<"0";
            return;
        }
        else if(n==2)
        {
            cout<<"0 1";
            return;
        }
        else
        {
            cout<<"0 1 ";
            n=n-2;
            while(n!=0)
            {
                c=a+b;
                cout<<c<<" ";
                a=b;
                b=c;
                n--;
            }
        }
    }

}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<fibonacciUsingRecursion(n);
}
